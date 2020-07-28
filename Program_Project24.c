/*This program counts up to the number 100 in lines of 5*/
#include <stdio.h>
int main (){
	int i;
	for(i = 1; i <= 100; ++i){
		printf(" %d",i);
		
		if(i % 5 == 0){
			printf(" \n");
		}
	}
	return 0;
}
