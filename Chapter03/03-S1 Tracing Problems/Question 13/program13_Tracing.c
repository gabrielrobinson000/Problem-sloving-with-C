/*Chapter 3 Tracing exercises problem 12.
 */
/*Try these values:
 *10  -1  -7  0  -1  4  14  4  6  13  5  9  0  42  2
 */
#include <stdio.h>
int main(){
	int x, y;

	prntf("Please enter a integer> ");
	scanf("%d", &x);
	printf("Please enter another integer> ");
	scanf("%d", &y);
	while(x != y){
		printf("%d %d", x, y);
		if(x > y){
			printf("\tx\n");
		}
		else{
			printf("\ty\n");
		}
		printf("Please enter two more integers> ");
		scanf("%d", &x);
		scanf("%d", &y);
	}
	printf("\nFinished\n");
}
/**/
