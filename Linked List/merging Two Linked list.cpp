#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;
struct node *second=NULL;
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
void merge()
{
    struct node *p,*q,*r;
    p=first;
    q=second;
    r=NULL;

    if(p->data<q->data)
    {
        r=p;
        p=p->link;
    }
    else
    {
        r=q;
        q=q->link;
    }
    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            r->link=p;
            p=p->link;
            r=r->link;
        }
        else
        {
            r->link=q;
            q=q->link;
            r=r->link;

        }
        if(p!=NULL)
        {
            r->link=p;
        }
        else if(q!=NULL)
        {
            r->link=q;
        }
    }

}
int main()
{
    create(&first,40);
    create(&first,50);
    create(&first,60);
    create(&second,10);
    create(&second,20);
    create(&second,30);

    merge();
    display(first);
    display(second);
    return 0;
}
