#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int state;

	char c;

	state = IN;

	while ( (c = getchar() ) != EOF)
	{
		if ( c == '\t' || c == '\n' || c == ' ')
			state = OUT;
		else if ( state == OUT)
		{
			state = IN;
			putchar('\n');
			putchar(c);
		}
		else
			putchar(c);
	}
}

