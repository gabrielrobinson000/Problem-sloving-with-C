/* candy program*/
#include <stdio.h>
int main(){
	int day,dailyIncrease,initialCandies,candiesGiven;
	dailyIncrease = 5;
	initialCandies = 6;
	for( day = 26; day <= 30; day++){
		candiesGiven = initialCandies + ((day - 1) * dailyIncrease );
		printf(" current date: %d and candy count: %d\n", day, candiesGiven);
	}
return 0;
}

