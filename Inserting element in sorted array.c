#include<stdio.h>
struct Array{
    int *A;
    int size;
    int length;
};
struct Array arr;
void insert(struct Array *a,int x)
{
    int i=a->length-1;
    while(i>=0 && a->A[i]>x)
    {
        a->A[i+1]=a->A[i];
        i--;
    }
    a->A[i+1]=x;
    a->length++;
}
int main()
{   int i,key;
    printf("Enter the size of an array : ");
    scanf("%d",&arr.size);
    printf("Enter the length of an array : ");
    scanf("%d",&arr.length);
    arr.A=malloc(arr.size*sizeof(int));
    printf("Enter elements : ");
    for(i=0;i<arr.length;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    printf("Enter the elemnet for inserting: ");
    scanf("%d",&key);
    insert(&arr,key);
    printf("After Inserting List Is Here : ");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
