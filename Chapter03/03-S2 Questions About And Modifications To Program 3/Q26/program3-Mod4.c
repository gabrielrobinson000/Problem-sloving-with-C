/*Program prog3c.c
 * payroll program which reads in an ID number, hours worked,
 * and rate of pay, and computes the weekly pay, after taxes,
 * using interactive data entry.
 * modifications applied:
 * Questions: 25, 26, 27 a & b, 28, 29,
 */
#include <stdio.h>
int main(){
	int id, numemps = 0;
	double hours, rate, pay;
	double tax, netpay;
	double totalHours,totalPay, totalNetpay;
	double topEmployee = 0,topEmployeeHours = 0, topPay = 0, topHours = 0;
	double incomeTax, socialSecurityTax;

	printf("This program computes an employee's pay.\n");
	printf("Enter the ID number, hours worked, and rate of pay.\n");
	printf("First, enter the employee's ID.\n");
	printf("To stop, enter -1111 as the employee's ID number> ");
	scanf("%d",&id);

        /*continue until the user enters -1111 */
	while(id != -1111){
		printf("Enter the hours worked> ");
		scanf("%lf", &hours);
		printf("Enter the rate of pay> ");
		scanf("%lf", &rate);

		pay = hours * rate;
		if(hours < 40){
			pay = pay * 1.5;
		}
		if(pay < 300){
			tax = 0.15 * pay;
                }
		else{
			tax = 0.28 * pay;
                }
		netpay = pay - tax;
		
		if(netpay < 100){
			netpay -10;
		}
		if(netpay > 100){
			
		}

		totalHours += hours;
		totalPay += pay;
		totalNetpay += netpay;
		if(topPay < pay){
			topPay = pay;
			topEmployee = id;
		}
		if(topHours < hours){
			topHours = hours;
			topEmployeeHours = id;
		}
		
		printf("\n\n\nEmployee %d worked %4.1f hours", id, hours);
		printf(" at a rate of $%5.2f, earning $%7.2f\n", rate, pay);
		printf("tax withheld was $%7.2f, leaving net pay of $%7.2f\n\n", tax, netpay);
		printf("Employee %d your pay is %7.2f \n", id, netpay);
		numemps++;
		printf("Enter an ID number; enter -1111 to stop> ");
		scanf("%d", &id);
        }
	printf("We have processed %d employees\n", numemps);
	printf("Total pay: %.2f totalNetpay: %.2f Total hours worked: %.0f\n\n", totalPay, totalNetpay, totalHours);
	printf("The top employee for pay is %.0f and the pay is %.2f \n", topEmployee, topPay);
	printf("The employee who worked the most is %4.0f and they worked %.0f hours.\n", topEmployeeHours, topHours);
	printf("Program is Finished.");
}

