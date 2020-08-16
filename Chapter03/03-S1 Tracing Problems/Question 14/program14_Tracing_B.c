/*Chapter 3 Tracing exercises problem 14 part B.
 */
#include <stdio.h>

int main(){

	int i, x, y, z;

	for(i = 1; i <= 3; i++){
		printf("Enter 3 numbers");
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%d", &z);
		printf("%d %d %d\n", x, y, z);
		printf("Enter 2 numbers");
		scanf("%d", &y);
		scanf("%d", &z);
	}
	printf("%d %d\n", y, z);
}

