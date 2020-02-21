make re
gcc -O0 -g tests/test.c -L . -lft -o test
echo "Running Maintest..."
gcc -O0 -g tests/main.c -L . -lft -o maintest
#lldb test
./test
./maintest
