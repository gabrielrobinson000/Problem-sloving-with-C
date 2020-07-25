/* This program prints */
#include <stdio.h>
int main(){
        int x;
        for(x = 4; x <= 9; x++){
                if(x <= 5){
                        printf(" %d", x);
                }

                if(x > 5){
                        printf(" %d %d", x, x * x);
                }
        }
        printf("\n");
return 0;
}


