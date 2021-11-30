#include<stdio.h> //--> header file (work --> input/output)
int main()
{
	int a ,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Addition of two number\n");        
	printf("%d + %d = %d\n",a,b,a+b);
	printf("Subtraction of two number\n");        
	printf("%d - %d = %d\n",a,b,a-b);								
	printf("Multiplication of two number\n");        
	printf("%d * %d = %d\n",a,b,a*b);
	printf("Division of two number\n");        
	printf("%d / %d = %d\n",a,b,a/b);	    
	return 0;	
}
