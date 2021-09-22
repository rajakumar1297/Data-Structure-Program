#include<iostream>
using namespace std;
struct Stack
{
    int Size;
    int Top;
    int *s;
};
void create(struct Stack *st)
{
    cout<<"Enter the size of Stack :";
    cin>>st->Size;
    st->Top=-1;
    st->s=new int[st->Size];

}

void push(struct Stack *st,int x)
{
   if(st->Top==st->Size-1)
        cout<<"Stack is Full...";
   else
   {
       st->Top++;
    st->s[st->Top]=x;
   }
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->Top==-1)
        cout<<"Stack is Empty";
    else
    {
        st->Top--;
    }
    return x;
}
void display(struct Stack st)
{
    int i;
    for(i=st.Top;i>=0;i--)
        cout<<st.s[i]<<endl;
}
void IsFull(struct Stack st)
{
    if(st.Top==st.Size-1)
        cout<<"stack is full";
}
int peek(struct Stack st,int index)
{
    if(st.Top-index+1<0)
    cout<<"invalid index";
    else
    {
        return st.s[st.Top-index+1];
    }

}
int main()
{
    struct Stack st;
    create(&st);
    push(&st,5);
    push(&st,10);
    push(&st,4);
    push(&st,1);
    push(&st,2);
    display(st);
    cout<<peek(st,3);
    return 0;
}
