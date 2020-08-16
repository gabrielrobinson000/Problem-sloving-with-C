/*Chapter 3 Tracing exercises problem 17.
 * Determine the correct field width and decimal precision 
 * needed to print each of the following numbers in the format
 * shown.
 */
/* a. 276.345
 * b. -8314.5678
 * c. 53.676
 * d. -.00003
 * e. .000076
 * f. 1.14151617
 * g. 567.3
 * h. 493.888
 * i. -9.4
 * j. 19.6475
 * k. -203.2
 */

#include <stdio.h>
int main(){

	double a = 276.345,b = -8314.5678,c = 53.676,d = -.00003,e = .000076,f = 1.14151617,g = 567.3,h = 493.888,i = -9.4,j = 196475,k = -203.2;
		
	printf("%3.3f %4.4f\n", a, b);
	printf("%2.3f %.5f\n", c, d);
	printf("%.6f %1.8f\n", e, f);
	printf("%3.1f %3.3f\n", g, h);
	printf("%1.1f %6.0f\n", i, j);
	printf("%3.1f\n", k);
	
	
	
}
