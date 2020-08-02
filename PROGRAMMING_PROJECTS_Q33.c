/* Write a program that prints two conversion tables to change temperatures in Fahrenheit (F)
 * to temperatures in Celsius (C) and vice versa. One formula is F = (9/5)C + 32.(What is the
 * other formula?The other formula C = (F - 32)* (5/9).) One table should list the Fahrenheit
 * values from -50 to 250 in steps of 10,together with the Celsius equivent. The other should
 * list Celsius values from -50 to 150 in steps of 5, together with the Fahrenheit equivalents.
 */

/*Need more help to figure this one out going to move on for now.*/
#include <stdio.h>
int main(){

	double f, c;
	double fahrenheit, celcuis;

	printf("Fahrenheit values\tCelsuis values\n");	
	
	for(f = -50,c = -50; f <= 250 && c <= 150; f+= 10,c += 5)
	{	
		fahrenheit = (9.0 / 5.0) * c + 32.0;
		celcuis = (f - 32.0) * (5.0 / 9.0);
		printf("  %f\t\t%f\n", fahrenheit, celcuis);
	}
	return 0;
}
