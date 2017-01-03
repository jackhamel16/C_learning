#include <stdio.h>

/* Prints histogram of amount of each character of input */

main()
{
	int c,i,count;
	int count_array[26];

	for(i=0;i<26;++i)
		count_array[i]=0; /* index 0=a, 1=b, ..., 25=z */

	while ((c=getchar()) != EOF) {
		if('a'<= c <= 'z') 
			++count_array[c-'a']; 
	}
	
	printf("\n");
	for(i='a'; i<='z'; ++i) {
		printf("%c:",i);
		for(count=0; count<count_array[i-'a']; ++count)
			printf("O"); /* prints O for each instance of the current letter */
		printf("\n"); }
}
