make re
make clean
gcc -O0 -g .tests/test.c -L . -I . -lft -o .tests/test
gcc -O0 -g .tests/main.c -L . -I . -lft -o .tests/maintest
#lldb test
echo "Norminette:"
norminette *.c | grep -E '(Warning|Error)'
echo "Custom test:"
./.tests/test
echo "Running maintest..."
./.tests/maintest
