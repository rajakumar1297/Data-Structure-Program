#include<stdio.h>
#include<stdlib.h>
struct Array{
      int *A;
      int size;
};
struct Array arr1;
struct Array arr2;
struct Array arr3;
void Merge(struct Array a, struct Array b,struct Array *c)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size && j<a.size)
    {
       if(a.A[i]<b.A[j])
            c->A[k++]=a.A[i++];
        else
            c->A[k++]=b.A[j++];
    }
   for(;i<a.size;i++)
        c->A[k++]=a.A[i];
    for(;j<a.size;j++)
         c->A[k++]=b.A[j];



}
int main()
{   int i;
    printf("Enter the size of array : ");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    arr2.A=(int *)malloc(arr1.size*sizeof(int));
    arr3.A=(int *)malloc(2*arr1.size*sizeof(int));
    printf("Enter the elemnets in FIrst Arraay: ");
    for(i=0;i<arr1.size;i++)
        scanf("%d",&arr1.A[i]);
    printf("Enter the elemnets in second Arraay: ");
    for(i=0;i<arr1.size;i++)
        scanf("%d",&arr2.A[i]);
    Merge(arr1,arr2,&arr3);
    for(i=0;i<2*arr1.size;i++)
        printf("%d ",arr3.A[i]);


}


















