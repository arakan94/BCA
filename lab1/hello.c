#include <stdio.h>

const char my_section[] __attribute__((section(".my_section"))) = "Very cool stuff!";

int main(int argc, char **argv)
{
	int i = 5;
	printf("Hello world\n");
	return 0;
}
