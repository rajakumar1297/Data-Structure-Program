#include<stdio.h>
int main()
{
   int *arr,size,i;
   printf("Enter Size: ");
   scanf("%d",&size);
   arr=(int *)malloc(size*sizeof(int));
   for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
   for(i=0;i<size;i++)
    printf("%c",arr[i]);
   return 0;
}
