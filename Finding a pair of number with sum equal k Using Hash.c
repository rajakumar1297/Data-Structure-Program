
struct Array{
    int *A;
    int size;
};
struct Array arr;
struct Array H;
int Max(int a[])
{   int Max=a[0];
    for(int i=1;i<arr.size;i++)
        if(a[i]>Max)
          Max=a[i];
    return Max;
}
int Min(int a[])
{   int Min=a[0];
    for(int i=1;i<arr.size;i++)
        if(a[i]<Min)
          Min=a[i];
    return Min;
}
void FindPairOfSumUsingHash(int a[],int k)
{
        int l,h,i;
        l=Min(a);
        h=Max(a);
        H.size=h;
        H.A=(int *)malloc(H.size*sizeof(int));
        for(i=0;i<=h;i++)
            H.A[i]=0;
        for(i=0;i<arr.size;i++)
          {

              if(H.A[k-a[i]]!=0)
                printf("%d + %d = %d\n",a[i],k-a[i],k);
              H.A[a[i]]++;
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
    printf("Enter Key :");
    scanf("%d",&k);
    FindPairOfSumUsingHash(arr.A,k);
    return 0;
}















