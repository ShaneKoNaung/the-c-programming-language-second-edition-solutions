#include <stdio.h>

/* Program to copy its input to its output, replacing each string of
 * one or more blanks by a single blank */

int main(void) 
{
	int c, flag;

	flag = 0; /* 0 when there are no spaces before current character c*/

	while ( ( c = getchar() ) != EOF)
	{
		if (c != ' ')
		{
			putchar(c);
			flag = 0;
		}	
		else
		{
			if (flag == 0)
				{
					flag = 1;
					putchar(c);
				}
		}


	}
}
