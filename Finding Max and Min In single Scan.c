#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
};
struct Array arr;
void MinMax(int a[])
{
    int i,Min,Max;
    Min=a[0];
    Max=a[0];
    for(i=0;i<arr.size;i++)
        if(a[i]<Min)
          Min=a[i];
        else if(a[i]>Max)
            Max=a[i];
    printf("Min= %d\nMax = %d",Min,Max);
}
int main()
{
    printf("Enter the array size :");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("Enter The Elements: ");
    for(int i=0;i<arr.size;i++)
    scanf("%d",&arr.A[i]);
    MinMax(arr.A);
}
