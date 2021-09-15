// write a program to find the factorial of a number using recursion
// fact(n) --> 1   if(n==0)
//        --> nxfact(n-1) otherwise
// fact(4)--> 4xfact(3)--> 4x3xfact(2)--> 4x3x2xfact(1)--> 4x3x2x1xfact(0)--> 4x3x2x1x1
// 4! --> 4x3! --> 4x3x2! --> 4x3x2x1! --> 4x3x2x1x0!
// 24 <--  6  <--    2    <--    1     <--    1
int fact(int n)
{
    if(n == 0)
     return 1;
    else return n * fact(n - 1);
}