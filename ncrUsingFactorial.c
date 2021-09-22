#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int c(int n,int r)
{
    int fac_n,fac_r,fac_n_r;
    fac_n=fact(n);
    fac_r=fact(r);
    fac_n_r=fact(n-r);
    return fac_n/(fac_r*fac_n_r);

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
