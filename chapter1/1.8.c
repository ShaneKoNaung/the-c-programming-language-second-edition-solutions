#include <stdio.h>

/* Program to count blanks, tabs and newlines */

int main(void) 
{
	int c, nb, nt, nl;

	nb = 0;
	nt = 0;
	nl = 0;

	while ( ( c = getchar() ) != EOF)
	{
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}

	printf("Blanks count : %d\nTabs count : %d\nNewline count : %d\n", nb, nt, nl);

	return 0;
}
