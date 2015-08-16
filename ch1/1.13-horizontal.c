#include <stdio.h>

#define OUT 0 /*we are outside a word*/
#define IN  1 /* we are in a word */
#define MAXLEN 10 /*max length of a word*/

main()
{
	int c;
	int i, j;
	int length = 0;
	int state = OUT; /*are we in a word or not?*/
	int wordlength[MAXLEN];

	/* Initialize wordlength array. */
	for (i = 0; i < MAXLEN; ++i)
		wordlength[i] = 0;

	/* Store word lengths */
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN) {
				state = OUT;
				++wordlength[length];
				length = 0;
			}
		}
		else
		{
			if (state == OUT) {
				state = IN;
			}
			length++;
		}
	}

	printf("Horizontal Histogram:\n");

	/* Print the histogram */
	for (i = 0; i < MAXLEN; ++i) {
		for (j = 0; j < wordlength[i]; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
}
