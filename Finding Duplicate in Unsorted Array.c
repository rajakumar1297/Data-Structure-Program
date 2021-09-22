struct Array{
    int *A;
    int size;
};
struct Array arr;
void Duplicate(int a[])
{
    int lastDuplicate,i;
    lastDuplicate=0;
    for(i=0;i<arr.size;i++)
        if(a[i]==a[i+1]&&a[i]!=lastDuplicate)
          {
              printf("Duplicate = %d\n",a[i]);
              lastDuplicate=a[i];
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
    Duplicate(arr.A);

}
