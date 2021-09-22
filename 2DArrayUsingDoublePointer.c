/*#include<stdio.h>
#include<stdlib.h>
int main(){
    //declaration of 2d array
    int a[3][4]={{1,2,3,4},{5,6,7,8},{3,5,7,9}};

    //using single pointer
    int *A[3];

    A[0]=(int *)malloc(4*sizeof(int));
    A[1]=(int *)malloc(4*sizeof(int));
    A[1]=(int *)malloc(4*sizeof(int));

    //using double pointer

    int **b;
    b=(int **)malloc(3*sizeof(int *));
    b[0]=(int *)malloc(4*sizeof(int));
    b[1]=(int *)malloc(4*sizeof(int));
    b[2]=(int *)malloc(4*sizeof(int));



}
*/
#include<stdio.h>
#include<stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int t,i,size,j,k,l;
   printf("Enter Test case : ");
   scanf("%d",&t);
   int *A[t];
   for(i=0;i<t;i++)
    {
        printf("Enter The size :");
        scanf("%d",&size);
        A[i]=(int *)malloc(size*sizeof(int));
        for(j=0;j<size;j++)
             {
               scanf("%d",&A[i][j]);
             }


    }
   for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
        printf("%d ",A[i][j]);
    printf("\n");
}

   return 0;

}





































