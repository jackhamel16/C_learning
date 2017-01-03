#include <stdio.h>

/* replaces tabs, backspace, and backslash with // */

main()
{
	int c;

	while((c=getchar()) != EOF) {
		if (c=='\t')
			printf("//");
		if (c=='\b')
			printf("//");
		if (c!='\b' && c!='\t')
			putchar(c);
	}
}
