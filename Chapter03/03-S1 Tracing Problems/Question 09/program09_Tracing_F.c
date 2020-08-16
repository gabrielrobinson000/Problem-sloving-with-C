/*Chapter 3 Tracing exercises problem 9 part A.
 *
 */
#include <stdio.h>
int main()
{
	int x = 0, y;
	while(x < 15){
		x = x + y;
		if(x < y){
			x = y;
		}
	}
}

/*	x is initaly set to 0, and while x is less than
 *	15 do these commands inside the loop. First 
 *	add x to y then set in the x variable. Then test
 *	 if x is less than y and if true set x to y 
 *	overriding the older value. After that loop back
 *	 to the beginning of the while and check if x is 
 *	 still less than 15, if bigger than 15 drop out of
 *	 the while loop.
