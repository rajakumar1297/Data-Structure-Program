struct Matrix
{
    int *A;
    int n;
};
void Set(struct Matrix *M,int i,int j,int x)
{
    if(i>=j)
        M->A[i*(i-1)/2+(j-1)]=x;
}
int Get(struct Matrix M,int i,int j)
{
    if(i>=j)
        return M.A[i*(i-1)/2+j-1];
    else
        return 0;
}
void display(struct Matrix M)
{
    int i,j;
    for(i=1;i<=M.n;i++)
    {
        for(j=1;j<=M.n;j++)
        {
            if(i>=j)
                printf("%d ",M.A[i*(i-1)/2+j-1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{   int i,j,x;
    struct Matrix M;
    printf("Enter Dimension: ");
    scanf("%d",&M.n);
    M.A=(int *)malloc(M.n*(M.n-1)/2*sizeof(int));
    printf("Enter all elements:\n");
    for(i=1;i<=M.n;i++)
    {
        for(j=1;j<=M.n;j++)
        {
            scanf("%d",&x);
            Set(&M,i,j,x);
        }
    }
    printf("\n");
    display(M);
    return 0;
}




























