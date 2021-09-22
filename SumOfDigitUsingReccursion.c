#include<stdio.h>
int SumOfDigit(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10+SumOfDigit(n/10));
}
int main()
{
    int a,dsum;
    printf("Enter The Number : ");
    scanf("%d",&a);
    dsum=SumOfDigit(a);
    printf("Sum Of Digit = %d",dsum);
    return 0;
}
