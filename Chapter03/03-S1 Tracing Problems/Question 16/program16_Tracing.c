/*Chapter 3 Tracing exercises problem 16.
 * moded of problem 15.
 */

#include <stdio.h>
int main(){
        double a, b;
        int c, d;

        printf("Enter the first line of numbers> ");
        scanf("%1f %1f %1f %d", &a, &b, &c, &d);
        printf("%5.2f %5.2f %5.2f %5d\n", a, b, c, d);
        printf("Enter the second line of numbers> ");
        scanf("%1f", &a);
        printf("Enter the third line of numbers> ");
        scanf("%1f %1f %1f", &a, &b, &c);
        printf("%7.2f %5.2f %6.1f %5d\n", a, b, c, d);
        printf("Enter the fourth line of numbers> ");
        scanf("%1f %1f %d", &b, &c, &d);
        printf("\n%7.2f %6.2f %4.1f %4d\n", a, b, c, d);
}
/*the scanf function does not seem to be working as indented
 * when you get internet ask him for help to explain what is 
 * going on.
 *
 * my guess is some change in how scanf handle variable 
 * sense the book was written.
 */

