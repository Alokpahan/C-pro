//0     1       fun(2)+fun(1)        fun(n-1)+fun(n-2)
//fun(1) fun (2) fun(3)              fun(n)

// fun(6) --> fun(5)+fun(4)
//            fun(4)+fun(3)+fun(3)+fun(2)
//            fun(3)+fun(2)+fun(2)+fun(1)+fun(2)+fun(1)+1
//            fun(2)+fun(1)+1+1+0+1+0+1
//            1+0+4
//            5
//fibonacci series, nth
//0 1 1 2 3 5 8 13 21 34 55 ......
int fun(int a)
{
    if(a==1)
    return 0;
    else if (a==2)
    return 1;
    else
    return fun(a-1)+fun(a-2);
}