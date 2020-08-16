/*Chapter 3 Tracing exercises problem 8.
 * do to hov the code is written at least one
 * of the values will be garbage.
 */
#include <stdio.h>
int main()
{
	int x = 0, y = 1, p, z; 
	if(x < y)
	{
		p = x;
	}
	else
	{
		z = x;
	}
	printf("%d %d", p, z);

}

