#include <stdio.h>

main()
{
	int cur;

	while ((cur = getchar()) != EOF)
	{
		if (cur == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (cur == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (cur == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
		{
			putchar(cur);
		}
	}
}

