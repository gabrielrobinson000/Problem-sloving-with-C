/* Write a program that prints the numbers from 1 to 30, together with 
 * the square, cube, and square root of each. Include appropriate column headings.
 */
#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	double xroot;
	
	printf("number\tsquare\tcube\tsquare root\n");

	for(xroot = 1,x = 1; x <= 30; x++,xroot++)
	{
		printf("%d\t %d\t %d\t %f\n", x, x * x, x * x * x, sqrt(xroot));
	}
	return 0;
}
