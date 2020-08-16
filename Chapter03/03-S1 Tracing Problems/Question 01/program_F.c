/*Chapter 3 Tracing exercises problem 1 part 'F'.
 */
#include <stdio.h>
int main()
{
	int c = 1;
	double d;

	printf("number\t\treciprocal");
	printf("\tcheck\n");
	while(c <= 8)
	{
		d = 1.0 / c;
		printf("%d\t\t%f\t%f\n", c, d, c * d);
		c += 1;
	}
}
/* My guess on what will print to the screen:
 * number	reciprocal	check 
 * 1		1.000000	1.000000
 * 2 		.500000		1.000000
 * 3		.333333		1.000000
 * 4		.250000		1.000000
 * will continue till it reaches 8
 */
