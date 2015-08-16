#include <stdio.h>

main()
{
	int cur, prev;

	while ((cur = getchar()) != EOF)
	{
		if (cur != ' ')
			putchar(cur);
		
		if (cur == ' ')
			if (prev != ' ')
				putchar(' ');
		prev = cur;
	}
}
