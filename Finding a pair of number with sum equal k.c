struct Array{
    int *A;
    int size;
};
struct Array arr;
void FindPairOfSum(int a[],int k)
{
    int i,j;
    for(i=0;i<arr.size-1;i++)
    {
        for(j=i+1;j<arr.size;j++)
            if(a[i]+a[j]==k)
              printf("%d + %d = %d",a[i],a[j],k);
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
    FindPairOfSum(arr.A,k);
}
