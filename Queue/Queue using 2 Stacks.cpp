#include<iostream>
using namespace std;
struct Stack
{
    int Size;
    int top1;
    int top2;
    int *s1;
    int *s2;
};
void create_s1(struct Stack *s)
{
    s->s1=new int[s->Size];
    s->top1=-1;
}
void create_s2(struct Stack *s)
{
    s->s2=new int[s->Size];
    s->top2=-1;
}
void push(struct Stack *s,int x)
{
    if(s->top1==s->Size-1)
        cout<<"Stack is full";
    else
    {
        s->s1[s->top1++]=x;
    }
}
bool isEmptyS1(struct Stack s)
{
    if(s.top1==s.Size-1)
        return false;
    else
        return true;
}
bool isEmptyS2(struct Stack s)
{
    if(s.top2==s.Size-1)
        return false;
    else
        return true;
}
int pop(struct Stack *s)
{
    int x;
    if(s->top1==-1)
        cout<<"stack is empty";
    else
    {
        x=s->s1[s->top1--];
        return x;
    }
}
void enqueue(struct Stack *s,int x)
{
    push(s,x);
}
int main()
{
    struct Stack s;
    cout<<"Enter the size of stack:";
    cin>>s.Size;

}
