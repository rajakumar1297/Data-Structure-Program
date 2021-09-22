#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *Top=NULL;
void push(int data)
{
    struct node *temp;
    temp=new node;
    if(temp==NULL)
        cout<<"stack is full";
    else
    {
        temp->data=data;
        temp->next=Top;
        Top=temp;
    }
}
int pop()
{
    int x;
    if(Top==NULL)
    cout<<"Stack is empty";
    else
    {
        x=Top->data;
        Top=Top->next;
    }
    return x;
}
void display()
{
    struct node *p;
    p=Top;
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
   cout<<"\n";
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    cout<<"delete element = "<<pop()<<endl;
    display();
    return 0;
}
