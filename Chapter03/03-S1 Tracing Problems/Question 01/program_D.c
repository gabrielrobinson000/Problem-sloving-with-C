/*Chapter 3 Tracing exercises problem 1 part 'D'.
 *
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = -3, y = 1, z = 2;
	
	while(x < z)
	{
		if(abs(x + z) > abs(y))
		{
			printf("yes");
		}
		if(abs(x) + abs(z) > abs(y))
		{
			printf("no");
		}
		printf("maybe\n");
		x++;
		z--;
	}
}

/* My guess to what will be printed to the screen:
 * nomaybe
 * nomaybe
 * maybe
 * maybe
 */

/*Wrong:
 * nomaybe
 * nomaybe
 * maybe
 */
