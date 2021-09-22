#include<stdio.h>
struct Array{
    int *A;
    int size;
};
struct Array arr;
int Sorted(int a[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
            return 1;
    }
    return 0;
}
int main()
{   int i,key,a;
    printf("Enter the size of an array : ");
    scanf("%d",&arr.size);
    arr.A=malloc(arr.size*sizeof(int));
    printf("Enter elements : ");
    for(i=0;i<arr.size;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    a=Sorted(arr.A,arr.size);
    if(a==1)
        printf("YES..");
    else
        printf("NO..");
}
