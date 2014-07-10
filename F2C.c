#include <stdio.h> 

#define LOWER 0 
#define UPPER 260 
#define STEP 20

main() 
{
    int fahr;
    float celsius;
    int lower, upper, step;
/*   
    lower = 0; // The bottom of temperature in fahr 
    upper = 500; // The ceiling of temperature in fahr 
    step = 20; // The step of increasement 
*/
    printf("%2c\t%3c\n", 'F', 'C');

/* // While loop
    fahr = lower;
    while (fahr <= UPPER) {
        celsius = 5 * (fahr-32)/9.0;
       	printf("%3d\t%6.2f\n", fahr, celsius);
	fahr = fahr + step;
    }
*/
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	printf("%3d\t%6.2f\n", fahr, 5.0 * (fahr - 32)/9.0);
    } 
