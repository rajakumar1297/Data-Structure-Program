#include<stdio.h>

int main()
{
    int array[10],query,i,arr_size;
    printf("Enter The Size Of Arry : ");
    scanf("%d",&arr_size);
    printf("Enter the Elements Into Array :");
    for(i=0;i<arr_size;i++)
      scanf("%d",&array[i]);
    printf("Enter The Query :");
    scanf("%d",&query);
    LinearSearch(array,query, arr_size);

}
void LinearSearch(int *array,int query,int arr_size)
{
        int i,found=0;
        for(i=0;i<arr_size;i++)
        {
         if(array[i]==query)
          {
            printf("Yes...Found at %d position",i);
            found=1;
            break;

          }

        }
    if(!found)
        printf("Not Found...");

}














