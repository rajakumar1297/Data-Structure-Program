#include<stdio.h>
int main()
{
   char A[]="medical";
   char B[]="decim";
   int H[26]={0};
   int i;
   for(i=0;A[i]!='\0';i++)
   {
       H[A[i]-97]++;
   }
   for(i=0;B[i]!='\0';i++)
      H[B[i]-97]--;
   for(i=0;i<26;i++)
    {if(H[i]!=0)
      {
          printf("Not Anagram");
          break;
      }
    else printf("Anagram");
    }

}

