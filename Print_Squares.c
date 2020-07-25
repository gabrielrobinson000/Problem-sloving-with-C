/*This Program prints out squares from 1 to 12*/
#include <stdio.h>
int main(){

	int x,i;
	for (i = 1; i <= 12; ++i){
		x = i * i;
		printf(" %d",x);
	}
	printf("\n");
	return 0;
}
