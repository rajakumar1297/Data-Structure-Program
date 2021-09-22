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
int Isloop(struct node *first)
{
    struct node *p,*q;
    p=q=first;
    do
    {
        p=p->link;
        q=q->link;
        q= q!=NULL?q->link:NULL;
    }while(p && q && p!=q);
    int r=p==q?1:0;
    return r;
}
int main()
{
    create(&first,2);
    create(&first,8);
    create(&first,10);
    create(&first,15);
    struct node *r,*s;
    r=first->link->link->link;
    s=first->link;
    r->link=s;
    cout<<Isloop(first);

    return 0;
}


























