#include<stdio.h>
#include<stdlib.h>
void create(int r,int c)
{
    int *a[r],i,j;
    for(i=0;i<c;i++)
    {
        a[i]=malloc(c*sizeof(int));
    }
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                    scanf("%c",&a[i][j]);
        }
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                    printf("%c ",a[i][j]);
            printf("\n");
        }

}
int main()
{
    create(3,4);
    return 0;
}
