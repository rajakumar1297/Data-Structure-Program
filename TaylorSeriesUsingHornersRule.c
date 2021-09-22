#include<stdio.h>
double e(int x,int n)
{
    static double R=1;
    if(n==0)
        return R;
    R=1+x*R/n;
    return e(x,n-1);
}
int main()
{
    int a,b;
    printf("Enter number : ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Result = %lf",e(a,b));
    return 0;
}
