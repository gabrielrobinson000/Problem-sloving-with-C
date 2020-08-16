/*Chapter 3 Tracing exercises problem 4.
 * The program will fallout of the while loop prematurely.
 */
#include <stdio.h>
int main()
{
	int x = 4;
	while(x < 5);
	{
		printf("%d", x);
	}
}
