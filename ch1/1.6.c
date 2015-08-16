#include <stdio.h>

/* Verify that getchar() != EOF is 0 or 1. */
main()
{
	printf("Give me a char...");
	int c, d;

	/* Check everything before EOF */
	while ((c = getchar()) != EOF) {
		d = c != EOF;
		printf("%d", d);
	}
	
	/* Check the EOF char*/
	d = c != EOF;
	printf("%d", d);
}
