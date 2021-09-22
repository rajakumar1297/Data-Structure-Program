#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,i,sum;
    for(i=2;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}
int main()
{   int n;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
