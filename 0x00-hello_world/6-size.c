#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: A c program printf the size of data types
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)
{		char s;
		int i;
		long int li;
		long long int lli;
		float f;

		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(s));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lii));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
		return (0);
}
