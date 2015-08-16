#include <stdio.h>

#define OUT 0 /*we are outside a word*/
#define IN  1 /* we are in a word */
#define MAXLEN 10 /*max length of a word*/

main()
{
	int c;
	int i, j;
	int length = 0;
	int max_occurrences = 0;
	int num_occurrences;
	int state = OUT; /*are we in a word or not?*/
	int wordlength[10];

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
				num_occurrences = ++wordlength[length];
				if (num_occurrences > max_occurrences)
					max_occurrences = num_occurrences;
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

	printf("Vertical Histogram:\n");

	/* Print the histogram */
	for (i = 0; i < max_occurrences; ++i) {
		for (j = 0; j < MAXLEN; ++j) {
			if (wordlength[j] > 0)
				putchar('*');
			else
				putchar(' ');
			--wordlength[j];
		}
		putchar('\n');
	}
}
