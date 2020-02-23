/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:15:52 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/22 17:15:52 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"
#include "unistd.h"
#include "stdlib.h"

static char		*get_file_buffer(t_list **buffers, const int fd)
{
	t_list				*lst;

	lst = *buffers;
	while (lst)
	{
		if (*((int*)lst->content) == fd)
			return (lst->content + sizeof(int));
		lst = lst->next;
	}
	lst = ft_lstnew(NULL, 0);
	if (lst == NULL)
		return (NULL);
	lst->content = malloc(sizeof(int) + BUFF_SIZE + 1);
	lst->content_size = sizeof(int) + BUFF_SIZE + 1;
	*((int*)lst->content) = fd;
	ft_bzero(lst->content + sizeof(int), BUFF_SIZE + 1);
	ft_lstadd(buffers, lst);
	return (lst->content + sizeof(int));
}

static void		file_buffer_free(t_list **buffers, const int fd)
{
	t_list				*to_del;

	if (buffers == NULL)
		return ;
	while (*buffers)
	{
		if (*((int*)(*buffers)->content) == fd)
		{
			to_del = *buffers;
			*buffers = to_del->next;
			free(to_del->content);
			free(to_del);
			break ;
		}
		buffers = &((*buffers)->next);
	}
}

static int		get_line_rd_lopen(const int fd, char **line, char *buffer)
{
	char				*next;
	char				*tmp;
	int					i;

	i = 1;
	while (i > 0)
	{
		tmp = *line;
		next = ft_strchr(buffer, '\n');
		if (next != NULL)
			*next = 0;
		*line = ft_strjoin(tmp, buffer);
		free(tmp);
		if (next != NULL)
			ft_strlcpy(buffer, next + 1, BUFF_SIZE - (next - buffer));
		if (*line == NULL)
			return (-1);
		if (next != NULL)
			return (1);
		if ((i = read(fd, buffer, BUFF_SIZE)) < BUFF_SIZE)
			buffer[i] = 0;
	}
	return (i + ft_strlen(*line));
}

int				ft_getline(const int fd, char **line)
{
	static t_list		*buffers;
	char				*c_buf;
	int					status;

	if (line == NULL || fd < 0 || (c_buf = get_file_buffer(&buffers, fd)) == 0)
		return (-1);
	*line = ft_strdup("");
	status = get_line_rd_lopen(fd, line, c_buf);
	if (status < 0)
	{
		free(*line);
		*line = NULL;
		file_buffer_free(&buffers, fd);
		return (-1);
	}
	if (status == 0)
	{
		free(*line);
		*line = NULL;
		file_buffer_free(&buffers, fd);
		return (0);
	}
	return (1);
}
