#include <stdio.h>
int main(){
int	c;
double	d;

printf("numb\trecip\t");
printf("\tcheck\n");
for(c = 1; c <= 8; c++){
	d = 1.0 / c;
	printf("%d\t%f\t%f\n",c,d,c * d);
	}
	return 0;
}
