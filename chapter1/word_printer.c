#include <stdio.h>

/* prints each word from input to a new line */

main() 
{
	int c,ws_count;
	
	ws_count = 0;

	while((c=getchar()) != EOF) {
		if (ws_count==0 && (c=='\n' || c=='\t' || c==' ')) {
			printf("\n");
			++ws_count; }
		else if (c!='\n' && c!='\t' && c!=' ') {
			putchar(c);
			ws_count = 0; }
	}
}

