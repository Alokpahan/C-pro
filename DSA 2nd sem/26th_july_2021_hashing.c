#include<stdio.h>
int hash(int key,int size)
{
    return key%size;
}                                             // it give index 0,1,2,3,4,5,6,7......
 void main()
 { 
     int num,i;
     int arr[20]={12,23,78,89,98,45,54,21,66,77,88,22,11,90,80,50,30,20,10,17};
     int hasharr[20]={0};
     int count=0;
     for(i=0;i<20;i++)
        if(hasharr[hash(arr[i],20)]==0)
           hasharr[hash(arr[i],20)]=arr[i];
        else
            count++;
    printf("Number of collisions = %d\n",count);
   /*  
   while(1)
     {
     //printf("Enter a number :");
     //scanf("%d",&num);
     //if(num==0) break;
     //printf("Hash Index is %d\n",hash(num,20));
     for(i=0;i<20;i++)
        if(hasharr[hash(arr[i],20)]==0)
           hasharr[hash(arr[i],20)]=num;
        else
            printf("Collsion!\n");
     }*/
     for(i=0;i<20;i++)
	  {
       printf("Hash Index = %3d Key = %3d\n",i,hasharr[i]);
		}
		printf("\nSearching....");
		printf("\nEnter a key to search :");
		scanf("%d",&num);
		if(hasharr[hash(num,20)]==num)
		   printf("\nSearch sucessful");
		   else
		   printf("\nSearch Unsucessful");
}
