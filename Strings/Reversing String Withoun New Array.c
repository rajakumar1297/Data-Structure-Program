int swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    char A[]="python";
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {

    }
    i=i-1;
    for(j=0;j<i;j++,i--)
    {
        swap(&A[j],&A[i]);
    }
    printf("%s",A);
}
