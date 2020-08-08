#include<stdio.h>
int main(){
        int x,y;

        for(x = 15, y = 4;x >= 0; x -= y, y += 3){
                printf("%d %d\n",x,y);
        }
	return 0;
}

