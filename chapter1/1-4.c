#include <stdio.h>

/* Prints a table of celsius to fahrenheit temps
	for celsius = 0,20,...,300; */

main()
{
	float fahr, celsius;
	int upper, lower, step;

	lower = 0;    /* lower limit */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	celsius = lower;

	printf("Celsius  Fahr\n");
	
	while (celsius <= upper) {
		fahr = ((9.0/5.0) * celsius)+32.0;
		printf("%5.0f %7.1f\n",celsius, fahr);
		celsius = celsius + step;
	}
}

