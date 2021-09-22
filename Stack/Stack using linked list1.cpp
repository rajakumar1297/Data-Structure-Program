#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*top=NULL;

void push(int data)
{
    node *t=new node;
    if(t==NULL)
        cout<<"stack overflow";
    else
    {
        t->data=data;
        t->next=top;
        top=t;
    }
}
void pop()
{
    if(top==NULL)
        cout<<"Stack Is empty";
    else
    {
        top=top->next;
    }
}
void display(struct node*p)
{
    if(p==NULL)
        cout<<"stack is empty.";
    else
    {
        while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display(top);
    pop();
    pop();
    pop();
    pop();
    pop();
    //display(top);
}
