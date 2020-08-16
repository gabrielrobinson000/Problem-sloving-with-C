/*Chapter 3 Tracing exercises problem 7.
 */
#include <stdio.h>
int main()
{
	int x = 0, y = 1, z = 2;

	if(x == y) /* if(x == y) is the correct coding of the if statement*/
	{
		z = x + 1;
	}
	else
	{
		z = x + 2;
	}
	printf("%d",z);
}
