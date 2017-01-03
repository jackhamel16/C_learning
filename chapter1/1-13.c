#include <stdio.h>

/* Prints histogram of frequency of lengths of words in input */

main()
{
	int c, i, length, count;
	int length_array[10];

	length = 0;
	for (i=0; i<10; ++i) /* array indices refer correspond to lengths and value is total */
		length_array[i] = 0;

i	while((c=getchar()) != EOF) {
		if (c==' ' || c=='\n' || c=='\t') { /*assuming all non-whitespace is a character */
			++length_array[length];
			length = 0; }
		else
			++length; }
	
	for (i=1; i<10; ++i) {
		printf("%d:",i); 
		for (count=0; count<length_array[i]; ++count)
			printf("O"); /* prints an O for each instance of a word with that length */
		printf("\n"); }
	
}
