#include <stdio.h>
#define Size 10
int hash(int key)
{
   return key % Size;
}
int i;
int hasharr[Size] = {0};
int hash_table(int arr[], int values)
{
   int j = 0;
   for (i = 0; i < Size; i++)
      if (hasharr[hash(arr[i])] == 0)
         hasharr[hash(arr[i])] = arr[i];
      else
         j++;
   printf("\n Number of collisions = %d\n", j);
}
void traversal(int hasharr[])
{
   printf(" ...................HASH TABLE...................\n");
   for (i = 0; i < Size; i++)
   {
      printf("\t Hash Index = %3d Key = %3d\n", i, hasharr[i]);
   }
}
void searching(int num)
{
   if (hasharr[hash(num)] == num)
      printf(" Search Successful");
   else
      printf(" Search Unsuccessful !");
}
void deleteing(int key)
{
   if (hasharr[hash(key)] == key)
   {
      hasharr[hash(key)] = 0;
      printf(" Deleted\n");
   }
   else
      printf(" %d is not present on the Hash Table !\n", key);
}
void main()
{
   int num, values, key;
   int arr[Size];
   printf(" Please Enter Keys:\n");
   for (i = 0; i < Size; i++)
   {
      printf(" Add Key %2d: ", i + 1);
      scanf("%d", &arr[i]);
   }
   hash_table(arr, values);
   traversal(hasharr);
   printf("\n ...................SEARCHING....................");
   printf("\n Enter a key to search: ");
   scanf("%d", &num);
   searching(num);
   printf("\n\n ...................DELETING.....................");
   printf("\n Enter a key to delete: ");
   scanf("%d", &key);
   deleteing(key);
   traversal(hasharr);
}
