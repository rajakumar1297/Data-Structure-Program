#include<stdio.h>
double e(double x, double n)
{
    double r;
    while(n>0)
    {
        r=1+x/n*r;
        n--;
    }
    return r;
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
