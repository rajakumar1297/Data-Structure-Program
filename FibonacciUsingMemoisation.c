#include<stdio.h>
int F[100]={0};
int mfib(int n)
{
    if(n<=2)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-1]==0)
           F[n-1]=mfib(n-1);
        if(F[n-2]==0)
           F[n-2]=mfib(n-2);
        return F[n-2]+F[n-1];
    }

}
int main()
{   int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("%d",mfib(n));
}



