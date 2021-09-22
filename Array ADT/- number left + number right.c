#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
};
struct Array arr;

void fun(struct Array *a)
{
    int temp;
    int i=0;
    int j=a->size-1;
    while(i<j)
    {
        while(a->A[i]<0)

            i++;

        while(a->A[j]>=0)
            j--;
        if(i<j)
       {
           temp=a->A[i],
           a->A[i]=a->A[j];
           a->A[j]=te mp;

       }
    }

}
int main()
{   int i;
    printf("Enter the size of an array : ");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("Enter elements : ");
    for(i=0;i<arr.size;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    fun(&arr);
    for(i=0;i<arr.size;i++)
        printf("%d ",arr.A[i]);

}











