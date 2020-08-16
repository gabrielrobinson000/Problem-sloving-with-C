/*Chapter 3 Tracing exercises problem 14.
 */

#include <stdio.h>
int main(){
	int x, y, z;

	printf("Enter a number");
	scanf("%d", &x);
	while(x < 6){
		printf("Enter 2 numbers> ");
		scanf("%d", &y);
		scanf("%d", &z);
		printf("%d %d\n", y, z);
		printf("Enter 2 numbers> ");
		scanf("%d", &z);
		scanf("%d", &x);
		printf("%d %d\n", z, x);
		printf("%d\n", x);
	}
	printf("Enter a number> ");
	scanf("%d", &y);
	printf("%d\n", y);
	printf("Enter 3 numbers> ");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	printf("%d %d %d\n", x, y, z);
}
