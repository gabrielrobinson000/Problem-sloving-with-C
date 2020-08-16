/*Chapter 3 Tracing exercises problem 1 part 'E'.
 */
#include <stdio.h>
#include <math.h>
int main()
{
	double b;
	int a = 0;

	printf("number ");
	printf("\tsquare root\n");
	while(a <= 6)
	{
		b = sqrt(a);
		printf("%d\t %f\n", a, b);
		a += 1;
	}
}

/* My guess for what will be printed to the screen:
 * number square root
 * 1 	  1.000000
 * 2 	  1.414213
 * 3 	  1.732050
 * 4 	  2.000000
 * 5 	  2.236067
 */

/*Wrong 
 * number square root
 * 0	  0.000000
 * 1	  1.000000
 * 2	  1.414214
 * 3	  1.732051
 * 4	  2.000000
 * 5	  2.236068
 * 6	  2.449490
 */
