#include <stdio.h>

/**
 * main - A program that prints the size of various computer sizes
 * return 0 (Success)
 */

int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("size of character: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of character: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of character: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of character: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of character: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
