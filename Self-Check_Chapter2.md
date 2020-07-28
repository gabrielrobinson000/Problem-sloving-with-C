Self-Check 2-1
1. Could the variables 'gpa' and 'result' instead be called 'number' and 'sqnumber'?
	Yes, but would you want to no. 

2. Why can't we increment by writing 'gpa++'?
	Because '++' increments by 1 and only 1.

3. What prints from the following 'printf' if 'num1' has the value 2.5 and 'num2' has the value -4.76? 
	'printf("%f %f\n",num1,num2);'
	The output will be: '2.500000 -4.760000'

Self-Check 2-2
1. What is the difference between the output of the two 'printf' statements in the program sequence?
	One prints '3' and the other prints the word 'help'.
	'int help;
	
	help = 3;
	printf("%d",help);
	printf("help");   '

2. What is purpose of an 'if' statements?
	To make branches in a program.

3. What is wrong with the following 'if' statement?
	The () are missing in the if statement.
	' if x > 7		
		printf("less");'

Self-Check 2-3
1. What does "precedence operations" mean?
	It's the computers order of operations.
2. What happens if two operations with the same precedence occur next to each other in an expression?
	?It's evaluated left to right.?
3. How can you override the normal order of precedence?
	By using ().


Self-Check 2-4
1. In what order will teh operations in each of the following C expressions be evaluated?
	What will the value of each expression be if p=4, q=7, r=3, s=5?

1a.(p-q) * (r-s)
   (4 - 7) * (3 - 5)
   (-3) * (3 - 5)
   (-3) * (-2)
   -3 * -2
     6

1b. p - (q + r) * s
    4 - (7 + 3) * 5
    4 - (10) * 5
    4 - 50
    -46


2. Which is the correct C translation of the right-hand side of the following Equation?
	The most correct answer would be C "(p + q * r - s)/(p + q)".



Self-Check 2-5
1. What is the difference between the comment at the beginning of the program and 
   the heading printed with the table?
	A comment is not printed to the screen and the table is printed to the screen when the program is ran.
 
1a. Who will see the comment?
	any one looking at the source code.

1b. Who will see the heading?
	The user of the program.

2. What is the advantage of column heading over messages printed with the output values?
	The columns are easier to read.
	
3. How can yau go to a new line before printing a message?
	by adding '\n' before the message.


Self-Check 2-6
1. What is an escape sequence?
	It's a way to print special character to the screen in a program.

2. What symbol introduces an escape sequence?
	The '\' starts an escape sequence.

3. What symbol introduces a conversion specification?
	The '%' starts a conversion specification.


Self-Check 2-7
1. What relational operator represents each of the following
	a. Great than			'>'
	b. not equal to 		'!='
	c. less than 			'<'
	d. greater than or equal to	'>='

2. What is wrong with this 'if' statement?
	if(x = 4) <------ It's means if x is 4. rather than what they probibly wanted 
		printf("%d",x);		which might have been "if(x == 4)" and it's testing
					if x is equal to the number 4.

3. Write each of the following using the new operators if possible?
	a. sum = sum + num;
	b. count = count + 1; ---> count += count; or count++;
	c. result = result % 4;
	d. numleft = numleft - 1; ---> numleft -= numleft; or numleft--;
	e. avg = num / count;
	f. result = result * 2;

self-Check 2-8
1. What two data types in C represent real numbers?
	double and float

1a. Which one is used in this text?
	double is stated many times in the text above on page 92.

2. Show three different ways to write the number 254.75 in scientific notation.
	2a.	2.5475 * 10^2
	2b.	25475 * 10^-2
	2c.	.25475 * 10^3

3.Which representation of 254.75 results if the number is printed with conversion specification %e %f?
	a. With %e you'll get '2.5475e+2'
	b. With %f you'll get '254.750000'


Self-Check 2-9
1. What does the sqrt function do?
	It calls the function sqrt from the math library to do it's coded function.

2. What is the purpose of the line #include <math.h>?
	It's tells the computer it can access functions from that library.

3. What data type would you use to hold each of the following?
	a. the distance from the sun to the earth '%e'
	b. a letter grade 'float'
	c. the value of pi 'long double'
	d. your total SAT score 'float'


Self-Check 2-10
1. What is a compilition error? Give three examples.
	1-1. printf("cat")
	1-2. print("%f",x);
	1-3. Printf("%d", num);

2. What is a execution error? Give an example.
	An error that happends when a program is running.

3. What is a bug?
	An unintended action a program executes

	 What is debugging?
		Removing that unitended action from a program.
