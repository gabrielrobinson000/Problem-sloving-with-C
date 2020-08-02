/* Write a program that print a table of numbers from 1 to 50. 
 * Next to each number should be the logarithm to the base 'e'
 * (natural log) of the number and 'e' raised to the number as 
 * exponent. Use the library function 'log' (for natural log)
 * and 'exp' (for 'e' raised to the number as exponent)
 */

#include <stdio.h>
#include <math.h>
int main()
{
	double x;

		
		
	printf("Number\tNatural Log\n\n");

	for(x = 1; x <= 50; x++)
	{
		printf("%f\t\t %f\t %f\n",x,log(x),pow(M_E, x));
	}
	printf("\n");
	return 0;
}
