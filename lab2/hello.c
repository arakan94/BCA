#include <stdio.h>

int foo(int val1, int val2, int val3, int val4)
{
	*(int *)NULL = val1;
	return val1;
}

int main(int argc, char *argv[])
{
	int x = 5;
	foo(x, 6, 7, 8);
	printf("Hello world\n");
	return 0;
}
