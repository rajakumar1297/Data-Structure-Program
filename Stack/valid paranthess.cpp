#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,a[3]={0},flag=0;
    cin>>len;
    char s[len];
    for(i=0;i<len;i++)
        cin>>s[i];
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
            a[0]++;
        if(s[i]=='{')
            a[1]++;
        if(s[i]=='[')
            a[2]++;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==')')
            a[0]--;
        if(s[i]=='}')
            a[1]--;
        if(s[i]==']')
            a[2]--;
    }
    for(i=0;i<3;i++)
        if(a[i]!=0)
           flag=1;
    if(flag==0)
        cout<<"Valid Parenthesis";
    else
        cout<<"Not Valid";
}
