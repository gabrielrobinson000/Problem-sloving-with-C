/*
 *find the smallest integer whose
 *square is greater than y
 */     
	#include <stdio.h>
	int main()
	{
		int number=0,test=0,y=6;

		while(test <= y){
			number++;
			test = number + number;
		}
		printf("%d is the smallest\n", number);
		
	}

