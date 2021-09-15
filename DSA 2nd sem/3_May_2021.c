#include<stdio.h>
/* function header */
/* returning_type name_of_the_function(parameters/argments)*/
int bigof2(int a, int b)
{
	int big;
	
	if(a>b)
	  big=a;
	else
	  big=b;
	
	return big;
}
int smallof2(int a, int b)
{
	int small;
	
	if(a>b)
	  small=b;
	else
	  small=a;
	
	return small;
}
int small2(int a, int b)
{
	return a<b?a:b;
}
void main()
{
	printf("%d",bigof2(bigof2(4,5),bigof2(67,87))); /*(5,87)*/
	printf("\n%d",bigof2(3,bigof2(5,21)));
	printf("\n%d",bigof2(bigof2(3,5),21));
}
/*2 Problems

1. Write a C program to find the value of nPr by writing a UDF to find the 
   factorial.
Hint: nPr=fact(n)/fact(n-r)

2. Write a C program to find the LCM of two numbers by writing 
   a user defined function to find GCD (Greatest Common Divisor) of 
   two numbers
Hint: GCD(45,23) - 23)45(1
                      23
                     ----
                      22)23(1
                         22
                        ----
						  1)22(22
						    2
						   ---
						    02
							 2  
							--
							 0 

int gcd(int a, int b)
{
  int r=a%b;
  while(r!=0)
  {
    a=b;
    b=r;
    r=a%b;
  }
  return b;
main()
{
  int lcm;
  lcm=
}
*/ 