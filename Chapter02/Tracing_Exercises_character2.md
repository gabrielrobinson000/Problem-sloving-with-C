//------------------------------------------------------------
loop zero
#include<stdio.h>
main(){
	int p,b;
	
	for(b = 2;b <= 6; b++){
	p = 2 * b + 3;
	printf("%d %d\n", b, p);
	}
}
=========================screen===============================
==============================================================
//------------------------------------------------------------
loop one
#include<stdio.h>
main(){
        int p,b;

        for(b = 2;b <= 6; b++){
        p = 2 * (2) + 3;
        printf("%d %d\n", b, p);
        }
}
=========================screen===============================
2 7

==============================================================
//------------------------------------------------------------
loop two
#include<stdio.h>
main(){
        int p,b;

        for(b = 3;b <= 6; b++){
        p = 2 * (3) + 3;
        printf("%d %d\n", b, p);
        }
}
=========================screen===============================
3 9

==============================================================
//------------------------------------------------------------
loop three
#include<stdio.h>
main(){
        int p,b;

        for(b = 4;b <= 6; b++){
        p = 2 * (4) + 3;
        printf("%d %d\n", b, p);
        }
}
=========================screen===============================
4 11

==============================================================
//------------------------------------------------------------
loop four
#include<stdio.h>
main(){
        int p,b;

        for(b = 5;b <= 6; b++){
        p = 2 * (5) + 3;
        printf("%d %d\n", b, p);
        }
}
=========================screen===============================
5 13

==============================================================
//------------------------------------------------------------
loop five
#include<stdio.h>
main(){
        int p,b;

        for(b = 6;b <= 6; b++){
        p = 2 * (6) + 3;
        printf("%d %d\n", b, p);
        }
}
=========================screen===============================
6 15

==============================================================
//------------------------------------------------------------

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------
loop zero
#include<stdio.h>
main(){
	int s,t;

	for(x = 15, y = 4;x >= 0; x -= y, y += 3){
		printf("%d %d\n",x,y);
	}
}
=========================screen===============================


==============================================================
//------------------------------------------------------------
loop one
#include<stdio.h>
main(){
        int s,t;

        for(x = 15, y = 4;x >= 0; x -= y, y += 3){
                printf("%d %d\n",x,y);
        }
}
=========================screen===============================
15 4

==============================================================
//------------------------------------------------------------
loop two
#include<stdio.h>
main(){
        int s,t;

        for(x = 15, y = 4;x >= 0; (15) -= (4), (4) += 3){
                printf("%d %d\n",x,y);
        }
}
=========================screen===============================
11 7

==============================================================
//------------------------------------------------------------
loop three
#include<stdio.h>
main(){
        int s,t;

        for(x = 15, y = 4;x >= 0; (11) -= (7), (7) += 3){
                printf("%d %d\n",x,y);
        }
}
=========================screen===============================
4 10

==============================================================
//------------------------------------------------------------
loop four
#include<stdio.h>
main(){
        int s,t;

        for(x = 15, y = 4;x >= 0; (4) -= (10), (10) += 3){
                printf("%d %d\n",x,y);
        }
}
=========================screen===============================


==============================================================
//------------------------------------------------------------

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------
step zero
#include<stdlib.h>
main(){
	int x,y,z;
	
	x = -3;
	y = 1;
	z = 2;
	if(abs(x + y) > abs(y)){
		printf("yes");
	}
	if(abs(x) + abs(y) > abs(z)){
		printf("no");
	}
	printf("maybe");
=========================screen===============================
==============================================================

//------------------------------------------------------------
step one
#include<stdlib.h>
main(){
        int x,y,z;

        x = -3;
        y = 1;
        z = 2;
        if(abs(-2) > abs(2)){
                printf("yes");
        }
        if(abs(-3) + abs(1) > abs(2)){
                printf("no");
        }
        printf("maybe");
=========================screen===============================
==============================================================

//------------------------------------------------------------
step two
#include<stdlib.h>
main(){
        int x,y,;

        x = -3;
        y = 1;
        z = 2;
        if(2 > 2){
                printf("yes");
        }
        if(3 + 1 > 2){
                printf("no");
        }
        printf("maybe");

=========================screen===============================
==============================================================

//------------------------------------------------------------
step three
#include<stdlib.h>
main(){
        int x,y,;

        x = -3;
        y = 1;
        z = 2;
        if(2 > 2){
                printf("yes");
        }
        if(4 > 2){
                printf("no");
        }
        printf("maybe");

=========================screen===============================
nomaybe
==============================================================

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------
step zero
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
=========================screen===============================

==============================================================
//------------------------------------------------------------
step one
#include <stdio.h>
int main(){
        int s,t;

        t = 0;
        for(s = 8; s >= 4; s -= 3){
                if(8 > 0){
                t += 3;
                }
                if(8 <= 3){
                s += 2;
                }
                printf("%d %d\n",8,3);
        }
        return 0;
}
=========================screen===============================
8 3
==============================================================
//------------------------------------------------------------
step two
#include <stdio.h>
int main(){
        int s,t;

        t = 3;
        for(s = 8; s >= 4; s -= 3){
                if(5 > 3){
                t += 3;
                }
                if(5 <= 6){
                s += 2;
                }
                printf("%d %d\n",7,6);
        }
        return 0;
}
=========================screen===============================
7 6
==============================================================
//------------------------------------------------------------
step three
#include <stdio.h>
int main(){
        int s,t;

        t = 6;
        for(s = 7; s >= 4; s -= 3){
                if(4 > 6){
                t += 3;
                }
                if(4 <= 6){
                s += 2;
                }
                printf("%d %d\n",6,6);
        }
        return 0;
}
=========================screen===============================
6 6
==============================================================
//------------------------------------------------------------

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------
loop zero		e
#include <stdio.h>
#include <math.h>

int main(){
	double b;
	int a;

	printf("number\tsquare root\n");
	for(a = 0; a <= 6; a++){
	b = sqrt(a);
	printf("%d\t%f\n",a,b);
	}
}
=========================screen===============================
number	sqaure root
0	0

==============================================================

//------------------------------------------------------------
loop one through 6              e
#include <stdio.h>
#include <math.h>

int main(){
        double b;
        int a;

        printf("number\tsquare root\n");
        for(a = 0; a <= 6; a++){
        b = sqrt(a);
        printf("%d\t%f\n",a,b);
        }
}
=========================screen===============================
number  sqaure root
0       0.000000
1	1.000000
2	1.414214
3	1.732051
4	2.000000
5	2.236068
6	2.449490

==============================================================
//------------------------------------------------------------

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------
loop zero 		F
#include <stdio.h>
int main(){
int     c;
double  d;

printf("numb\trecip\t");
printf("\tcheck\n");
for(c = 1; c <= 8; c++){
        d = 1.0 / c;
        printf("%d\t%f\t%f\n",c,d,c * d);
        }
        return 0;
}
=========================screen===============================
==============================================================
//------------------------------------------------------------
loop one through 8               F
#include <stdio.h>
int main(){
int     c;
double  d;

printf("numb\trecip\t");
printf("\tcheck\n");
for(c = 1; c <= 8; c++){
        d = 1.0 / c;
        printf("%d\t%f\t%f\n",c,d,c * d);
        }
        return 0;
}
=========================screen===============================
numb	recip		check
1	1.000000	1.000000
2	0.500000	1.000000
3	0.333333	1.000000
4	0.250000	1.000000
5	0.200000	1.000000
6	0.166667	1.000000
7	0.142857	1.000000
8	0.125000	1.000000

==============================================================
//------------------------------------------------------------

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
2. For each of the following series of C statements, try to describe in words what is accompplished.

2a. 	if(x > y)
		{max = x;}
	if(x <= y)
		{ max = y;}
	printf("%d", max);
	
	This chunk of code checks for two thing first is if x is greater than y
	and if that check is true it will set max to the variable x. The next 
	check is if x is less than or eqaul to y and if it passes that check
	then max is set to the value y. If neither of them test true they will 
	 both be passed over leaving max undefined or what it was set to ealier
	in the program.

2b.	answer = 2a. similar with different test cases. 
2c.	answer = 2a. similar with different test cases.

2d.	for(x = 1; x < 15; x * 2)
	{
		if(x < 50)
		{
			x *= 2;
		}
	}
	
	This chunk of code loops x  from 1 to 100 at a base rate of x * 2 and test if the value of x is less than 50.
	If x is less than 50 it applies * 2 again in loops where it is true. When x is greater than 50 it then it
	only applies * 2 till x is 100, Then the program drops out of that loop.


3. For each of the following series of C statements, show the exact order in which the operations are performed.
	Assume that all variables have a data type double and a = 5, b = 6, c = 3, d = 2, e = 2.
3f.	-a + b * c / 3 * d + e;
	-5 + 6 * 3 / 3 * 2 + 2;
	-5 + 18 / 3 * 2 + 2;
	-5 + 6 * 2 + 2;
	-5 + 12 + 2;
	 7 + 2;
	 9;

3g.	-a + b * c / (3 * d) + e;
	-5 + 6 * 3 / (3 * 2) + 2;
	-5 + 18 / (3 * 2) + 2;
	-5 + 18 / 6 + 2;
	-5 + 3 + 2;
	-2 + 2;
	 0;

3h.	4 * (a - 1) * (c / (b * d));
	4 * (5 - 1) * (3 / (6 * 2));
	4 * 4 * (3 / (6 * 2));
	4 * 4 * (3 / 12);
	4 * 4 * .25;
	16 * .25;
	4;

3i.	4 * a - 2 * c / b * d;
	4 * 5 - 2 * 3 / 6 * 2;
	20 - 2 * 3 / 6 * 2;
	20 - 6 / 6 * 2;
	20 - 1 * 2;
	20 - 2;
	18;

3p.	-a - b + c * d; a = 5, b = 6, c = 3, d = 2, e = 2
	-5 - 6 + 3 * 2;
	-5 - 6 + 6;
	-5 - 6 + 6;
	-11 + 6;
	-5;

3b.	-(a - b + c) * d;
	-(5 - 6 + 3) * 2;
	-(-1 + 3) * 2;
	-2 * 2;
	-4;

3r.	-b - p + 5;
	-6 + 5 + 5;
	-1 + 5;
	4;

3s.
3t.
3u.
3v.
3w.
3x.
3y.



MISCELLANEOUS EXERCISES

6. Which operation has higher precedence, addition or multiplication?
	Multiplication.

14. Because of the relationship between data types 'char' and 'int',
	 using %c to print a 'char' value prints a character, while %d
	prints the corresponding ASCII value.