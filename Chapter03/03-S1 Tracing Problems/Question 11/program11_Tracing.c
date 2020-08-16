/*Chapter 3 Tracing exercises problem 11.
 *
 */
/**/
#include <stdio.h>
int main(){
        int number = 0, test = 0, y;
	while(test <= y){
		number++;
		test = number + number;
	}
	printf("%d is the smallest", number);/*they forgot to add ';'*/
}

/*find the smallest integer whose square is greater than y. */
