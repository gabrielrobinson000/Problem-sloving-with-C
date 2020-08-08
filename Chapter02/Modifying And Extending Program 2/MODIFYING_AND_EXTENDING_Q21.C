/*
 *based off of Program prog2c.c
 *creats a table to evaluate a formula based on values of
 * gpa in the range from gpa = 0.00 to 4.00 in units of .50
 */
#include <stdio.h>
int main()
{
        double gpa, result;

        printf("\t\tTable of Function Values\n\n");
        printf("Grade Point Average\tValue of Formula\tStatus\n\n");

        for(gpa = 0.00; gpa <= 4.00; gpa += 0.50)
        {
                result = (gpa * gpa * gpa + 7 * gpa -1)/(gpa * gpa - (gpa + 5) / 3);
                printf("%f\t\t%f", gpa, result);
                if(result >= 5)
                {
                        printf("\t\tAdmit");
                }

                if(result == 5)
                {
                        printf("\t\tSee professor");
                }

                if(result <= 5)
                {
                        printf("\t\tRejected");
                }
                printf("\n");
        }
        printf("\nThe table is finished\n");
}

