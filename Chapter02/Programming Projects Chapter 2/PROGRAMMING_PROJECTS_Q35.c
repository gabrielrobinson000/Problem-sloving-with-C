/*Write a program that finds and prints the values of 'result'
 * for all even values of 'y' from 2 to 16, using the following
 * formula: result = sqrt(y - 1) + (y + 4)^3 / y - (1 / y)
 */
#include <stdio.h>
#include <math.h>
int main()
{
        float result;
        int y;


        printf("The Results output\n");

	for(y = 2; y <= 16; y+=2)
        {
                result = (sqrt(y - 1.) + pow(y + 4., 3.)) / (y - (1. / y));
		printf("%f\n",result);
        }
}


