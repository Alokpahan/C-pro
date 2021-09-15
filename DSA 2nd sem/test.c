#include <stdio.h>
int rec(int a, int b){
    if(b==0)
    return 0;
    else return a+rec(a,b-1);
}
void main ()
{
    printf("%d",rec(4,5));
}