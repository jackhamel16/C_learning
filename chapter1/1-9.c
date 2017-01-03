#include <stdio.h>

/* Replaces a sequence of more than one blank with one blank of an input,
then outputs result */

main()
{
	int c,blank_count;

	blank_count = 0;

	while((c=getchar()) != EOF) {
		if (c==' ')			/* count each space */
			++blank_count;
                if (c!=' ')			/* if char is not space, reset count */
                        blank_count = 0;
		if (blank_count <= 1)		/* outputs char if it isnt a consecutive space */
			putchar(c);
	}
}

