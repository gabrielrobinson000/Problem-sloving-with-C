#include <stdio.h>
#include <math.h>
int main(){
        double b;
        int a;

        printf("number\tsquare root\n");
        for(a = 0; a <= 6; a++){
		b = sqrt(a);
        	printf("%d\t%f\n",a,b);
        }
	return 0;
}
