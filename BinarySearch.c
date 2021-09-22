#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
};
struct Array arr;
int BinarySearch(struct Array *a,int key)
{
    int l,h,mid;
    l=0;
    h=a->size-1;
    while(l<=h)
    {   mid=(l+h)/2;
        if(a->A[mid]==key)
            return mid;
        else if(a->A[mid]>key)
            h=mid-1;
        else
            l=mid+1;

    }
return -1;
}
//Using Reccursion
int RbinarySearch(int a[],int l,int h,int key)
{
    int mid;

    if(l<=h)
    {   mid=(l+h)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>key)
            return RbinarySearch(a,l,mid-1,key);
        else
            return RbinarySearch(a,mid+1,h,key);
    }
return -1;
}

int main()
{
    int i,key,result;
    printf("Enter The Size Of An Array : ");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("Enter the Sorted Elements :");
    for(i=0;i<arr.size;i++)
        scanf("%d",&arr.A[i]);
    printf("Enter the key Elements For Search: ");
    scanf("%d",&key);
    result=BinarySearch(&arr,key);
    if(result==-1)
        printf("Not Found...");
    else
        printf("Found at Location %d",result);
}































