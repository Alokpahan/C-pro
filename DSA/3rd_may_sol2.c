#include <stdio.h>
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
  printf("The LCM of %d and %d is %d \n", a, b, lcm);
}
