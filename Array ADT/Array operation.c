#include<stdio.h>
#include<stdlib.h>
struct Array
    {
        int *A;
        int size;
        int length;
    };
struct Array arr;
void display()
{
    int i;
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
void append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}
void insert(struct Array *arr,int index,int x)
{
    if(index>=0 && index<=arr->length)
    {
        for(int i=arr->length; i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}
int del(struct Array *arr,int index)
{
    int x=arr->A[index];
    if(index>=0 && index<arr->length)
      {
          for(int i=index;i<arr->length-1;i++)
            {
                arr->A[i]=arr->A[i+1];
            }
        arr->length--;
        return x;
      }
      return 0;
}
int main()
{
   int i,n;

   printf("Enter The Size Of An Array:");
   scanf("%d",&arr.size);
   printf("Enter The Length: ");
   scanf("%d",&arr.length);
   arr.A=(int *)malloc(arr.size*sizeof(int));
   printf("Enter the elememts: ");
   for(i=0;i<arr.length;i++)
     scanf("%d",&arr.A[i]);
   display();
   del(&arr,4);
   printf("After delete\n");
   display();


}













































































