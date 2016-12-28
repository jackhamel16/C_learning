#include <stdio.h>

/* prints a fahrenhait to celsius table
	for fahr = 0,20,...,300; with floating points */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;    /* lower limit of temp table */
	upper = 300;  /* upper limit of temp table */
	step = 20;    /* step size */

	fahr = lower;

	printf("Fahr Celsius\n");	

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

