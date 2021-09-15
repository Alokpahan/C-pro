// recursion
// write a recursive function "a" to the power "b".
// power(3,4) --> 81 --> (3x3x3x3)      power(3,4)
//                                      power(3,3)x3
//                                      power(3,2)x3x3
//                                      power(3,1)x3x3x3
//                                      power(3,0)x3x3x3x3
//                                      1x3x3x3x3
// power(a,b) --> 1                if b==0
//            --> power (a,b-1)xa  Otherwise

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return power(a, b - 1) * a;
}
//power(4,2) --> power(4,1)x4 --> 16
//               --> power(4,0)x4 --> 4
//                   --> 1
//
//power(4,0)(push) --> 1  (pop)
//power(4,1)(push) --> 4  (pop)
//power(4,2)(push) --> 16 (pop)
void main()
{
    int a=2,b=10;
    printf("%d",power(a,b));
}
//poower(2,10) --> popped and value returned is 1024
//poower(2,9)  --> popped and value returned is 512
//poower(2,8)
//poower(2,7)
//...
//poower(2,1)  --> popped and value returned is 2
//poower(2,0)  --> popped and value returned is 1