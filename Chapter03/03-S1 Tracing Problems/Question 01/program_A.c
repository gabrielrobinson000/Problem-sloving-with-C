/*Chapter 3 Tracing exercises problem 1 part 'A'.
 *
 */

#include <stdio.h>
int main()
{
	int p, q = 2;

	printf("q  p\n");
	while(q <= 6)
	{
		p = 2 * q + 3;
		printf("%d  %d\n", q, p);
		q += 2;
	}
}

/* Here is what I think the output will be.
 * q  p
 * 2  7
 * 4  11
 *
 */
