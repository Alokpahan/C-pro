/* 2. Write a C program to find the LCM of two numbers by writing 
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

#include <stdio.h>
#include <conio.h>
int gcd(int a, int b)
{
  int r = a % b;
  while (r != 0)
  {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}
int main()
{
  int lcm, a, b;
  printf("Enter two number: \n");
  scanf("%d%d", &a, &b);
  lcm = (a * b) / (gcd(a, b));
  printf("The GDC of %d and %d is %d \n", a, b, gcd(a, b));
  printf("The LCM od %d and %d is %d \n", a, b, lcm);
  return 0;
}
