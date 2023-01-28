#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  *
  * return: Always 0
  */

int main(void)
{
	char alph;

	for (alph = 'z' ; alph >= 'a' ; alph--)
	{
		putchar(alph);
	}

	putchar('\n');
	return (0);
}
