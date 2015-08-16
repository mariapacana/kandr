#include <stdio.h>

#define MAXCHARVAL 256 /* Max val for ASCII char */

main()
{
	int c, i, j;
	int cur_occurrences;
	int max_occurrences = 0;
	int charfrequency[MAXCHARVAL];

	/* Initialize char frequency array */
	for (i = 0; i < MAXCHARVAL; ++i)
		charfrequency[i] = 0;

	/* Store char values */
	while ((c = getchar()) != EOF)
	{
		printf("%d", c);
		cur_occurrences = ++charfrequency[c];
		if (cur_occurrences > max_occurrences)
			max_occurrences = cur_occurrences;
	}

	printf("Vertical Histogram:\n");
	printf("Max occurrences %d\n", max_occurrences);

	/* Print the histogram */
	for (i = 0; i < max_occurrences; ++i) {
		for (j = 0; j < MAXCHARVAL; ++j) {
			if (charfrequency[j] > 0) {
				putchar('*');
				--charfrequency[j];
			}
			else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
}

