//ThiS is For Sorted Array
struct Array{
    int *A;
    int size;
};
struct Array arr;
void DuplicateCount(int a[])
{
    int i,j;
    for(i=0;i<arr.size;i++)
    {
        if(a[i]==a[i+1])
         {
             j=i+1;
             while(a[j]==a[i])
                j++;
             printf("%d is Appearing %d times\n",a[i],j-i);
             i=j-1;
         }

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
    DuplicateCount(arr.A);

}
