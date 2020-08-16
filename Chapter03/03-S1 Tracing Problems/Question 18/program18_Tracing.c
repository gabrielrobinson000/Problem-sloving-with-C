/*Chapter 3 Tracing exercises problem 18.
 * Determine the correct field width and decimal precision 
 * needed to print each of the following numbers in the format
 * shown.
 */
/* a. 42
 * b. -6.8
 * c. 0.1
 * d. 371.00
 * e. 6174.55
 * f. 0.0999
 * g. -0.00008
 * h. 1000.056
 */
#include <stdio.h>
int main(){
	double a = 42, b = -6.8, c = 0.1, d = 371.00;
      	double e = 6174.55, f = 0.0999, g = -0.00008, h = 1000.056;

	printf("%2.f %1.1f\n", a, b);
	printf("%.1f %3.2f\n", c, d);
	printf("%4.2f %.4f\n", e, f);
	printf("%.5f %4.3f\n", g, h);
}
