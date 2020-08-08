#include <stdio.h>
int main()
{
        int id, numemps = 0;
        double hours, rate, pay;
        double tax, netpay;

        printf("This program computes an employee's pay.\n");
        printf("Enter the ID number, hours worked, and rate of pay.\n");
        printf("First, enter the employee's ID number.\n");
        printf("To stop, enter -1111 as the employee's ID number > ");

        /* continue until user -1111 */
	id = 0000;
        while(id != -1111)
        {
		scanf("%d",&id);
		printf("Enter the hours worked> ");
                scanf("%lf",&hours);
                printf("Enter the rate of pay> ");
                scanf("%lf",&rate);

                pay = hours * rate;
                if(pay < 300){
                        tax = 0.15 * pay;
                }
                else{
                        tax = .28 * pay;
                }
                netpay = pay - tax;
                printf("\nEmployee %d worked %4.1f hours", id, hours);
                printf(" at a rate of %5.2f, earning $%7.2f\n", rate, pay);
                printf("tax withheld was $%7.2f, leaving net pay of $%7.2f\n\n", tax, netpay);

                numemps++;
                printf("Enter an ID number; enter -1111 to stop> ");
                scanf("%d", &id);
        }
        printf("We have processed %d employees\n", numemps);
}

