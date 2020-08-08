Tracing Exercises for Chapter 3

1. Show exactly what is print by each program.
1.a.
q  p
2  7
4  11

1.b.
x  y
11  7
4  10
-6  13

1.c.
8 3
5 3
5 6
7 6
4 6

1.d.
nomaybe
nomaybe
maybe
maybe

1.e.
number square root
1 1.000000
2 1.414213
3 1.732050
4 2.000000
5 2.236067

1.f.
1 1.000000 1.000000
2 .500000 2.000000
3 .333333 3.000000
4 .250000 4.000000
5 .200000 5.000000
6 .166666 6.000000
7 .142857 7.000000

2. What is the value of 'ans' at the end of the follow 'if-else' statement?
	ans will equal 26.

3. What is printed by the following section of code?
num = 12 and x = 12

4. What is wrong with the following loop?
x = 4;
while (x < 5);
	printf("%d ",x);

There is a semicolon added after the testing parameter causing it to terminate early.

5.a. When reading data, which of the two 'printf' or 'scranf' causes a message to
 appear on the screen?
			printf.
5.b. Which of the two causes the computer to stop and wait for the user to type in a value?
	scanf.
5.c. Which of the two lines below could be eliminated? Why?
	The 'printf' could be remove, there is a write to screen ablity build in.
	 
	printf("Enter a number\n");
	scanf("%d", &num);

6. A program is said to be 'user friendly' if it is easy to use. What techniques
	help to make a program user friendly? 

7. What is wrong with the following 'if-else'? Note that it is not a simple syntax 
error---it will compile. Fix the error.
	
	if(x = y)<---- replace it with 'x == y'
	     z = x + 1;
	else
	     z = x + 2;


8. Suppose we have the following 'if-else' statement. If the code prior to it gives
 values only to 'x' and 'y', can we rely on 'p' or 'z' having a value (other than garbage)
 in the call to 'printf'?
	
	if(x < y)
	    p = x;
	else
	    z = x;
	printf("%d  %d", p, z);
	
	Yes, but only one of them will have a none garbage value.


9. For each of the following series of C statements, try to desribe in words what is 
accomplished (the larger of 'x' and 'y' is put into 'max', and then 'max' is printed;
 or 'x' is multiplied over and over by 2 until it is more than 30). For parts (a) 
 through (c), (f), and (g), assume that 'x' and 'y' have already been given values 
 have a data type 'int'.

9.a. 
	if(x > y)
		max = x;
	else
		max = y;
	printf("%d", max);

	If x is greater than y , set max eqaul to x
	else set it eqaul to y then print it to the 
	screen.

9.b.
	if(x > y)
		ans = x;
	else
		ans = y;
	if(x == y)
		ans = 1;

	If x is greater than y, set ans eqaul to x
	else ans is set eqaul to y and then test 
	if x is eqaul to y and if true set ans eqaul
	1 if not leave it the older value.

9.c.
	hold = 5;
	if(x == y)
		hold = x;
	else
		hold = y;

	set hold to the value of 5. then test if x is eqaul
	to y and if true set hold to the value of x else set
	it to y. 
9.d. 
	x = 1;
	while(x < 100){
		if(x < 50)
			x *= 2;
		x *= 2;
	}
	
	The code snipit counts up to 1000 by multiples 2's
	and if below apple multiple by 2 again.

9.e.
	x = 0;
	while(x < 15){
		x = x + 4;
		if(x == 8)
			printf("%d",x);
	}

	set x to 0. While x is less 15 add 4 to x each cycle
	 and when x is eqaul the value 8 print x to the screen.
	When x is 14 drop out of the while loop.

9.f. 
	x = 0;
	while(x < 15){
		x = x + y;
		if(x < y)
			x = y;
	}



9.g.
	if(x == y)
		printf("%d", x);
	else
		printf("%d", y);



9.h.
	x = 0;
	while(x <= 6){
		y = x + 4; 
		if(y == 10)
			printf("done");
		x += 1;
	}



10. The segment below is designed to subtract 5 from the larger
 of the two numbers, 'x' and 'y', and also add 5 to the smaller.
	
	int x, y;
	...
	if(x > y)
		x -= 5;
	else 
		y -= 5;
	if(x > y)
		y += 5;
	else 
		x += 5;
	...


10.a. Does the segment accomplish this in all cases? For example,
 what happens if 'x' is 5 and 'y' is 6? What if 'x' is 6 and 'y' is 5?
	No.
	
	
10.b. Rewrite the segment so that it does work in all cases.
(Hint: You may want to use one or more pairs of braces.)

	int x, y;
	...
	if(x > y){
		x -= 5;
		y += 5;
	}
	else{
		x += 5;
		y -= 5;
	}
	...

	...
	int x,y;/* This code isn't completely right.*/
	
	if(x >= y){
		x -= 5;
		y += 5; 
	}
	
	else{
		x += 5;
		y -= 5;
	}
	...

11. The following program segment is preceded by a comment that describes
 the goal. Try to use the data to see if the segment works in all cases.
 If it does not, explian exactly what happens and show how to amend it so
 that it does always work.
	
	/*
	 *find the smallest integer whose
	 *square is greater than y
	 */
	#include <stdio.h>
	int main()
	{
		int number=0,test=0,y;
		while(){
			number++
			test = number + number;
			}
		printf("%d is the smallest", number)<---- they forgot to add ';'.
	}

12. Trace step by step the execution of the following program as it reads
in the data. Assume that the user types in these values requested:
	5  7 -3  4  10 -1  7 0
	#include <stdio.h>
	int main()
	{
		int x;
		
		scanf("Please enter a number> %d",&x);
		while(x != 0){
			if(x < 0)
				printf("\tnegative\n");
			if(x > 0)
				printf("\tpositive\n");
			if(x > 5)
				printf("\tmore\n");
			else 
				printf("\tless\n");
			scanf("Please enter another number> %d",&x);
		}
	}
