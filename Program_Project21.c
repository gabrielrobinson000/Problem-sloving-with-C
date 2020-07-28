/* This program prints the even numbers that are divisiable by 10*/
#include <stdio.h>
int main(){
	

        int x;
        for(x = 0; x <= 2200000000; x++){
                if(x % 10 == 0){
                        printf(" %d",x);
                }
        }
	printf("\n");
	return 0;
}

