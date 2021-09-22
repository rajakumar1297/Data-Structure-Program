#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;
void create(struct node **p,int data)
{
    struct node *temp,*last;
    temp=new node;
    temp->data=data;
    temp->link=NULL;
    if(*p==NULL)
    {
        *p=temp;
        last=temp;
    }
    else
    {
        last->link=temp;
        last=temp;
    }
}
void display(struct node *p)
{

    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->link;
    }
    cout<<endl;
}
void max_min()
{
    int Max,Min;

    struct node *p,*q;
    p=q=first;
    Max=Min=p->data;
    q=p->link;
    while(q!=NULL)
    {
        if(q->data>p->data)
        {
             Max=q->data;
        }
        else if(q->data<p->data)
          {
               Min=q->data;
          }
          q=q->link;
          p=p->link;
    }
    cout<<"max = "<<Max<<endl;
    cout<<"Min = "<<Min<<endl;
}
int main()
{
    create(&first,2);
    create(&first,8);
    create(&first,10);
    create(&first,15);
    create(&first,20);
    create(&first,30);
    create(&first,50);
    max_min();
    display(first);
    return 0;
}


























