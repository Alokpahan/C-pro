 // write a C program with user defined function to 
 // implement "updation" operation on a data structure.
#include <stdio.h>
int salary_updation(int salary[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        salary[i] = salary[i] + salary[i] * (0.1);
    }
}
int traversal(int salary[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d \n", salary[i]);
    }
}
int main()
{
    int i, salary[8] = {34500, 63200, 67000, 23000, 12000, 89000, 56000, 34200};
    printf("\n Salary before updation: \n");
    traversal(salary, 8);
    salary_updation(salary, 8);
    printf("\n Salary After updation by 10 percent: \n");
    traversal(salary, 8);
    return 0;
}
