#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
};
struct Array arr;

/*int Max(struct Array  *b)
{
    int Max=b->A[0];
    for(int i=1;i<b->size;i++)
    {
        if(b->A[i]>Max)
            Max=b->A[i];
    }
    return Max;
}
*/
/*int Min(struct Array *c)
{
    int Min=c->A[0];
    for(int i=1;i<c->size;i++)
    {
        if(c->A[i]<Min)
            Min=c->A[i];
    }
    return Min;
}
*/
void Duplicate(struct Array *a)
{
    int i,l,h;
    l=a->A[0];
    h=a->A[arr.size-1];
    struct Array H;
    H.A=(int *)malloc(l*sizeof(int));
    for(i=0;i<=h;i++)
        H.A[i]=0;
    for(i=0;i<a->size;i++)
    {
        H.A[a->A[i]]++;
    }
    for(i=0;i<=h;i++)
      {
          if(H.A[i]>1)
            printf("%d is Appearing %d times\n",i,H.A[i]);
      }
}


int main()
{   int k;
    printf("Enter the array size :");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("Enter The Elements: ");
    for(int i=0;i<arr.size;i++)
    scanf("%d",&arr.A[i]);
    Duplicate(&arr);

}






















