#include <stdio.h>

/* Counts all of the whitespace in an input */

main()
{
	int c,n1;
	
	while((c=getchar()) != EOF) {
		if (c=='\n')    /* ' ' means the program reads the char contained as its ASCII int */
			++n1;	/* ++ means to increment by 1, can be prefix or suffix */
		if (c==' ')
			++n1;
		if (c=='\t')
			++n1;
	}

	printf("\nCount: %5d\n",n1);
}

