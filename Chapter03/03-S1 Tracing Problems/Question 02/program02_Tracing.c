/*Chapter 3 Tracing exercises problem 2.
 */

#include <stdio.h>
int main()
{
	int num1 = 12, num2 = 14, ans;
       if(num1 + 3 < num2 - 2)
       {
       		ans = num1 - 9;
       }
	else
	{
		ans = num1 + num2;
	}       
	printf("%d\n",ans);
}
/*the value of 'ans' will be 26.
 */

/*Correct answer!
 */
