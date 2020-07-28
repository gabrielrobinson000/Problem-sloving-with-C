#include <stdio.h>
int main(){
	int s,t;

	t = 0;
	for(s = 8; s >= 4; s -= 3){
		if(s > t){
		t += 3;
		}
		if(s <= t){
		s += 2;
		}
		printf("%d %d\n",s,t);
	}	
	return 0;
}
