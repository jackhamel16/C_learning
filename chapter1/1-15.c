#include <stdio.h>

/* Uses a function for temperature conversion */

float f_to_c(int fahr)
{
	return (5.0/9.0) * (fahr-32.0);
}

#define UPPER	300
#define LOWER	0
#define STEP	20

main()
{
	int fahr;
	
	printf("Fahr Celsius\n");
	for(fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP)
		printf("%3d %6.1f\n", fahr, f_to_c(fahr));
	
	return 0;
}
