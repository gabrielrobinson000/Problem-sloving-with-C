/* This program prints the even numbers from 4 to 20 and there squares Version 2*/
#include <stdio.h>
int main(){
        
        int x;
        for(x = 4; x <= 20; x++){
		if(x % 2 == 0){
			printf(" %d",x);
		}
	printf("\n");
        }
return 0;
}

