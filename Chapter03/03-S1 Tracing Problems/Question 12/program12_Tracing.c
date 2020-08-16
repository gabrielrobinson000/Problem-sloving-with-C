/*Chapter 3 Tracing exercises problem 12.
 */
/*Try these values:
 *5  7  -3  4  10  -1  7  0
 */
/* the computer serially tests the if statements
 * and enters them if they test true.
 */
#include <stdio.h>
int main(){
	int x;

	scanf("Please enter a number> %d", &x);
	while(x != 0){
		if(x < 0){
			printf("\tnegative\n");
		}
		if(x > 0){
			printf("\tpositive\n");
		}
		if(){
			printf("\tmore\n");
		}
		else{
			printf("\tless\n");
		}
		scanf("Please enter another number> %d", &x);
	}
}

