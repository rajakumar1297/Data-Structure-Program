int main()
{
    char A[]="How Are You";
    int i,Vcount=0,Ccount=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' )
        {
            Vcount++;
        }
        else if((A[i]>=65 && A[i]<=90)||A[i]>=97 && A[i]<=122)
        {
            Ccount++;
        }
    }
    printf("Vowel = %d\nConsonent = %d\nTotal Letter = %d",Vcount,Ccount,Vcount+Ccount);
}
