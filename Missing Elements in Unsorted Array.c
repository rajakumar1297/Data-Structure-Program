#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *A,i,*B,size,l,h;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    A=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++)
      scanf("%d",&A[i]);
    l=1;
    h=12;
    B=(int *)malloc(h*sizeof(int));
    for(i=0;i<=h;i++)
      B[i]=0;
    for(i=0;i<=h;i++)
    {
        B[A[i]]++;
    }
    for(i=l;i<=h;i++)
   {
        printf("%d\n",B[i]);
   }

}
