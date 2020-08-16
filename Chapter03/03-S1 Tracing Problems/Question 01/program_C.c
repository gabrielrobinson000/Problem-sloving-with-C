/*Chapter 3 Tracing exercises problem 1 part 'C'.
 *
 */
#include <stdio.h>
int main()
{
	int s = 8, t = 0;

	while(s >= 4)
	{
		if(s > t)
		{
			t += 3;
		}
		if(s <= t)
		{
			s += 2;
		}
		printf("%d %d\n", s, t);
		s -= 3;
		printf("%d %d\n", s, t);
	}
}

/*Here's what i think the program will print to the screen:
 * 8 3
 * 5 3
 * 5 6
 * 7 6
 * 4 6
 */

/*Wrong this was printed to the screen:
 * 8 3
 * 4 3
 * 7 6
 * 4 6
 * 6 6
 * 3 6
 * /
