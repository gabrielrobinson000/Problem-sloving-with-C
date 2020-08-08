#include <stdio.h>
int main()
{
	double x;

	for(x = 17.5; x >= .5; x -= 4.5)
	{
		printf("%e\n",x);
	}
	return 0;
}
