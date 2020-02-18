#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi_base.c"

int test(char* str, char* base, int expected){
	printf("%s\t\t: %s %i -> (%i)\n", str, base, ft_atoi_base(str, base), expected);
	printf("%s\t\t  0123456789\n", str);
	return ft_atoi_base(str, base) == expected;
}

int main(){
	int out = 1;
	out &= test("546 is the number", "0123456789", 0);
	out &= test("-2147483648", "0123456789", -2147483648);
	out &= test("dq", "oqdbhrymlk", 21);
	out &= test("0", "rgh", 0);
	out &= test("-0", "fof", 0);
	out &= test("1000000", "0123456789abcdef", 0x1000000);
	out &= test("joooooo", "ojrfgklm,.890123", 0x1000000);
	out &= test("-99APPLES!", "-99gh", 0);
	out &= test("OOF", "FO", 0b110);
	out &= test("\t\n\v\f\r +256", "0123456789", 0);
	out &= test("+3", "0123", 3);
	out &= test("+-3", "1234567890", 0);
	out &= test("-+3", "0987654321", 0);
	printf(out ? "PASS\n" : "FAIL\n");
}