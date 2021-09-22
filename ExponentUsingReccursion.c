#include<stdio.h>
int exponent(int m, int n)
{
    if (m==0 && n==0)
        return 0;
    else if(n==0)
        return 1;
    else
        return exponent(m,n-1)*m;
}
int main()
{
    int m,n,ex;
    printf("Enter First Number : ");
    scanf("%d",&m);
    printf("Enter Second number : ");
    scanf("%d",&n);
    ex=exponent(m,n);
    if(ex==0)
        printf("Indeterminate form...");
    else
        printf("Exponent = %d ",ex);

}
