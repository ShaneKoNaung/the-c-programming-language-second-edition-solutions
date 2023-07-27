#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* Count words, lines and chars */
int main(void)
{
	int nl, nw, nc, state, n;

	nl= nw= nc = 0;
	state = OUT;

	while ( ( n = getchar()) != EOF)
	{
		++nc;
		if (n == '\n')
			++nl;
		if (n == ' ' || n == '\t' || n == '\n')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d", nl, nw, nc);
}
			      


