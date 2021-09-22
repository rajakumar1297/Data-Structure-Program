int main()
{
    int i,H[26];
    char A[20];
    printf("Enter:");
    scanf("%s",&A);
    for(i=0;i<26;i++)
    {
        H[i]=0;
    }
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;
    }
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
          {
              printf("%c is Duplicate",97+i);
              printf(" %d times\n",H[i]);

          }


    }
}
