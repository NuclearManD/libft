make re
make clean
gcc -O0 -g .tests/test.c -L . -I . -lft -o .tests/test
gcc -O0 -g .tests/vec2_and_3_tests.c -L . -I . -lft -o .tests/vec2_and_3_tests
gcc -O0 -g .tests/main.c -L . -I . -lft -o .tests/maintest
gcc -O0 -g .tests/mathtest.c -L . -I . -lft -o .tests/mathtest
#lldb test
echo "Norminette:"
norminette *.c *.h | grep -E '(Warning|Error)'
echo "Custom test:"
./.tests/test
echo "Running maintest..."
./.tests/maintest
echo "Math test 1:"
./.tests/mathtest
echo "Math test 2:"
./.tests/vec2_and_3_tests
