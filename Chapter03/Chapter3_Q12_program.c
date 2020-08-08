#include <stdio.h>
int main()
{
	int x;
        
	
	printf("Please enter a number> ");
	scanf("%d",&x);
	while(x != 0){
		if(x < 0){
			printf("\tnegative\n");
		}
		if(x > 0){
			printf("\tpositive\n");
		}
		if(x > 5){
			printf("\tmore\n");
		}
		else{
			printf("\tless\n");
		}
		printf("Please enter another number> ");
		scanf("%d",&x);
		}
}
