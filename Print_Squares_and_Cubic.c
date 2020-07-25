/*This program prints from 4 to 9, together with each numbers square and cube*/
#include <stdio.h>
int main(){
	int i,sqnumber,cbnumber;
	for(i = 4; i <= 9; i++){
		sqnumber = i * i;
		cbnumber = sqnumber * i;
		printf("%d %d %d\n", i, sqnumber,cbnumber);
	}


	return 0;
}
