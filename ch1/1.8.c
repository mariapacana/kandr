#include <stdio.h>

main()
{
	int c, btnl;

	btnl = 0;
	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '\n') || (c == '\t'))
			++ btnl;
	}

	printf("%d", btnl);
}
