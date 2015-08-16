#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

main()
{

	int c, state;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ' || c == '\t')
		{
			if (state == IN) {
				state = OUT;
				putchar('\n');
			}			
		}
		else
		{
			if (state == OUT) {
				state = IN;
			}
		 	putchar(c);
		}
	}
}
