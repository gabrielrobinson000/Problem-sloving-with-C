#include <stdio.h>
#include <stdlib.h>
int main(){
        int x,y,z;

        x = -3;
        y = 1;
        z = 2;
        if(abs(x + y) > abs(z)){
                printf("yes");
        	}
        if(abs(x) + abs(y) > abs(z)){
                printf("no");
        	}
        printf("maybe");
	return 0;
}
