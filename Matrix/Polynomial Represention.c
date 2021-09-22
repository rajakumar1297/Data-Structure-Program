#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Term
{
    int coeff;
    int exp;
};
struct Poly
{
    int n;
    struct Term *t;
};
void display(struct Poly P)
{
    int i,sum=0;
    for(i=0;i<P.n;i++)
    {
        printf("%dX%d+",P.t[i].coeff,P.t[i].exp);
    }
}
int main()
{
    int i;
    struct Poly P;
    printf("Enter number of term: ");
    scanf("%d",&P.n);
    P.t=(struct Term *)malloc(P.n*sizeof(struct Term));
    for(i=0;i<P.n;i++)
    {
        printf("term %d Coeff & exp:",i+1);
        scanf("%d %d",&P.t[i].coeff,&P.t[i].exp);
    }
    display(P);
    return 0;
}






















