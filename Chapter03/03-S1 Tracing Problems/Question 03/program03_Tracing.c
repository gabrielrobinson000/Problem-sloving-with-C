/* Chapter 3 Tracing exercises problem 3.
 * This will be printed to the screen:
 * num = 12 and x = 12
 * Wrong:
 * num = 12 and x = 9
 */

#include <stdio.h>
int main()
{
	int num = 9, x = 12;

	if(num >= x)
	{
		num = x;
		x = num - 2;
	}
	else
	{
		x = num;
		num += 3;
	}
	printf("num = %d and x = %d\n", num, x);
}
