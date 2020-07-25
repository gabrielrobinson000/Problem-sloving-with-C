/* This program prints */
#include <stdio.h>
int main(){
        int x;
        for(x = 4; x <= 20; x++){
        	if(x % 2 == 0){
			printf(" %d %d\n", x, x * x);
		}

		else{
			printf(" %d %d\n", x, x * x * x);	
		}
        }
	printf("\n");
return 0;
}

