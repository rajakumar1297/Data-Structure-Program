#include<stdio.h>
int c(int n, int r)
{
    if(n==r || r==0)
        return 1;
    else
        return c(n-1,r-1)+c(n-1,r);
}
int main()
{
    int n,r;
    printf("Enter n,r :");
    scanf("%d",&n);
    scanf("%d",&r);
    printf("ncr = %d",c(n,r));
    return 0;
}
