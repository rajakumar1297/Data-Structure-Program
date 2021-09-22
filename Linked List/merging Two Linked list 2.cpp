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
        temp->prev=last;
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
    struct node *third,*last;
    third=last=NULL;
    if(first->data<second->data)
    {
        third=last=first;
        first=first->link;
        last->link=NULL;
    }
    else
    {
        third=last=second;
        second=second->link;
        last->link=NULL;
    }
    while(first!=NULL && second!=NULL)
    {
        if(first->data<second->data)
        {
           last->link=first;
           first=first->link;
           last=last->link;
           last->link=NULL;
        }
        else
        {
            last->link=second;
            second=second->link;
            last=last->link;
            last->link=NULL;
        }
    }
    first=third;

}
int main()
{
    create(&first,2);
    create(&first,8);
    create(&first,10);
    create(&first,15);
    create(&second,2);
    create(&second,7);
    create(&second,12);
    create(&second,14);
    merge();
    display(first);
    return 0;
}
