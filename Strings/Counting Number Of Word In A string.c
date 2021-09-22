int main()
{
    char A[]="How Are You";
    int i,word=1;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' '&& A[i-1]!=' ')
            word++;
    }
   printf("Word =%d",word);
}
