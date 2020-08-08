/*Write a program that finds and prints the values of 'ans' for values 
 * of 'num' from 1 to 6 in increments of .25 (1,1.25,1.50,...), based 
 * on the following formula:
 *  ans = ((num + 2)^2 -|num - 7|) /((num + 3) / 14)
 */
#include <stdio.h>
#include <math.h>
int main()
{
	float num, ans;

	for(num = 1; num <= 6; num += .25)
	{
		ans = (pow( 2,num) - fabs(num - 7)) / ((num + 3) / 14);
		printf("input: %f\t ans = %f\n", num, ans);
	}
}
