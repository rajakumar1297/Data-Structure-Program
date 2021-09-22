#include<stdio.h>
int main()
{
    int i,j,flag;
    char A[10];
    printf("Enter :");
    scanf("%s",&A);
    for(j=0;A[j]!='\0';j++)
    {

    }
    j=j-1;
    for(i=0;i<=j;i++,j--)
    {
        if(A[i]!=A[j])
            flag=0;
        else
            flag=1;
    }
    if(flag==1)
        printf("Plaindrom");
    else
        printf("Not");
}
