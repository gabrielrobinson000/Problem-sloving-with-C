/*
 *based off of Program prog2c.c
 *creats a table to evaluate a formula based on values of
 * gpa in the range from gpa = 0.00 to 4.00 in units of .50
 */
#include <stdio.h>
int main()
{
        double gpa, result, coverLow,lowest;
        lowest = 0;
        printf("\t\tTable of Function Values\n\n");
        printf("Grade Point Average\tRange Covered\t\tValue of Formula\tStatus\n\n");

        for(gpa = 0.00; gpa <= 4.00; gpa += 0.50)
        {
                result = (gpa * gpa * gpa + 7 * gpa -1)/(gpa * gpa - (gpa + 5) / 3);

                if(result <= lowest)
                {
                        lowest = result;
                }

                coverLow = gpa -.25;/*tests if the range is below zero*/
                if(coverLow <= 0)
                {
                        coverLow += .25;
                }

                printf("%f\t\t%f-%f\t%f", gpa, coverLow, gpa + .24, result);/*this chunk tests for admition*/
                if(result >= 0)
                {
                        printf("\t\tAdmit");
                }

                if(result == 0)
                {
                        printf("\t\tSee professor");
                }
		                if(result <= 0)
                {
                        printf("\t\tRejected");
                }

                printf("\n");
        }
        printf("\nThe table is finished\n");
        printf("the lowest value is %f\n", lowest);
}


