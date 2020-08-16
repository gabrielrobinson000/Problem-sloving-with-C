/*Chapter 3 Tracing exercises problem 1 part 'B'.
 *
 * */

#include <stdio.h>

int main()
{
	int x = 15, y = 4;

	printf(" x  y\n");
	while(x >= 0)
	{
		x = x - y;
		y = y + 3;
	}
	printf("%d  %d\n", x, y);
}

/*My guess to what this program will print out to the
 * screen is:
 *  x  y
 * 11  7
 * 4  10
 * -6  13
 */
/*Wrong the screen prints:
 * x  y
 *-6  13
 */
