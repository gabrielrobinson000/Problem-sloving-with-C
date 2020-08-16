/*Chapter 3 Tracing exercises problem 9 part E.
 *
 */
#include <stdio.h>
int main()
{
        int x = 0;
	while(x < 15){
		x = x + 4;
		if(x == 8){
			printf("&d", x);
		}
	}
}

/*	set x to 0. While x is less 15 add 4 to x each cycle
	and when x is eqaul the value 8 print x to the screen.
	When x is 14 drop out of the while loop.
*/
