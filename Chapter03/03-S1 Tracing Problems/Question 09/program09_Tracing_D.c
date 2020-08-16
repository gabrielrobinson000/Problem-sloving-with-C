/*Chapter 3 Tracing exercises problem 9 part D.
 *
 */
#include <stdio.h>
int main()
{
        int x = 1;
	while(x < 100){
		  
		if(x < 50){
			x *= 2;
		}
		x *= 2;
	}
}

/*	The code snipit counts up to 1000 by multiples of 2
 *	and if below the value 50 apply multiply by 2 again.
 */
