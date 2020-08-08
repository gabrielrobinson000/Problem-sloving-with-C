/*Write a program that prints a table of the angles from 0 to 180 degree,
 *together with the radian measurement, the sine, and the cosine of each angle.
 */

#include <stdio.h>
#include <math.h>
int main()
{	
	double x,radians;
	
	printf("degrees\t\tradians\t\tsine\t\tcosine\t\ttangent\n\n");
	
	for(x = 0; x <= 180; x++)
	{	
		radians = x * (3.14159/180);
		
		printf("%f\t%f\t%f\t%f\t%f\t\n", x, radians,sin(x),cos(x),tan(x));
	}
	printf("\n");
	return 0;
}

