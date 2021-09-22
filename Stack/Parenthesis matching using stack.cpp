#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int Size;
    int top;
    char *s;
};
void push(struct Stack *st,char data)
{
    if(st->top==st->Size-1)
        cout<<"stack is full";
    else
        {
            st->top++;
            st->s[st->top]=data;
        }
}
void pop(struct Stack *st)
{
    if(st->top==-1)
        cout<<"stack is empty";
    else
    {
        st->top--;
    }
}
bool isEmpty(struct Stack st)
{
    if(st.top==-1)
        return true;
    else
        return false;
}
int isMatching(char *exp)
{
      struct Stack st;
      st.s=new char[st.Size];
      st.top=-1;
      st.Size=strlen(exp);
      int i;
      for(i=0;exp[i]!='\0';i++)
      {
          if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
                push(&st,exp[i]);
          else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']')
          {
              if(isEmpty(st))
                return false;
              else
                pop(&st);
          }
      }
      return isEmpty(st)?true:false;
}
int main()
{
    char *s="(]";
    cout<<isMatching(s);
    return 0;
}






















