#include<stdio.h>
#include<stdlib.h>
struct Array{
     int *A;
     int size;
};
struct Array arr;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int TranspositionLinearSearch(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->size;i++)
        if(key==arr->A[i])
            {
                swap(&arr->A[i],&arr->A[i-1]);
                return i;
            }
    return -1;
}
int LinearSearch(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->size;i++)
     {
         if(key==arr->A[i])
          return i;
     }
    return -1;
}
int main()
{
    int i,a,key;
    printf("Enter the size of array:");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("Enter Elements:");
    for(i=0;i<arr.size;i++)
        scanf("%d",&arr.A[i]);
    printf("Enter Key Element For search: ");
    scanf("%d",&key);
    //a=LinearSearch(&arr,key);
    a=TranspositionLinearSearch(&arr,key);
    if(a==-1)
        printf("NOT FOUND");
    else
        printf("Found at Location %d",a);
}


































