#include<stdio.h>
#include<stdlib.h>
struct Array{
      int *A;
      int size;
};
struct Array arr1;
struct Array arr2;
struct Array *arr3;
struct Array *Merge(struct Array *a,struct Array *b)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    while(i<a->size && j<b->size)
    {
        if(a->A[i]<b->A[j])
            arr3->A[k++]=a->A[i++];
        else
            arr3->A[k++]=b->A[j++];
        for(;i<a->size;i++)
            arr3->A[k++]=a->A[i];
        for(;j<b->size;j++)
            arr3->A[k++]=b->A[j];
    }
    arr3->size=a->size+b->size;
};

int main()
{   int i;
    printf("Enter the size of first array : ");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    printf("Enter the elemnets in FIrst Arraay: ");
    for(i=0;i<arr1.size;i++)
        scanf("%d",&arr1.A[i]);
    printf("Enter the size of second array : ");
    scanf("%d",&arr2.size);
    arr2.A=(int *)malloc(arr2.size*sizeof(int));
    printf("Enter the elemnets in second Arraay: ");
    for(i=0;i<arr2.size;i++)
        scanf("%d",&arr2.A[i]);
    arr3=Merge(&arr1,&arr2);
    for(i=0;i<arr3->size;i++)
        printf("%d ",arr3->A[i]);
}



















