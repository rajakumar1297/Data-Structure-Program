#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int Size;
    int top;
    char *s;
};
void push(struct Stack *st,char x)
{
   if(st->top==st->Size-1)
        cout<<"Stack is Full...";
   else
   {
       st->top++;
    st->s[st->top]=x;
   }
}
int pop(struct Stack *st)
{
    if(st->top==-1)
        cout<<"Stack is Empty";
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
int isBalence(char *exp)
{
    int i;
    struct Stack st;
    st.Size=strlen(exp);
    st.top=-1;
    st.s=new char[st.Size];
    for( i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(&st,'(');
        else if(exp[i]==')')
        {
            if(isEmpty(st))
                return false;
            pop(&st);
        }
    }
    return isEmpty(st)?true:false;
}
int main()
{
    char *s="((a+b)*(c-d)))";
    cout<<isBalence(s);
}
