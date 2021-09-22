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
void deleting_duplicate()
{
    struct node *q=first;
    struct node *p=q->link;
    while(p!=NULL)
    {
        if(p->data==q->data)
        {
           q->link=p->link;
           p=q->link;

        }
        else
          {
              p=p->link;
             q=q->link;
          }
    }
}
int main()
{
    create(&first,3);
    create(&first,5);
    create(&first,5);
    create(&first,8);
    create(&first,8);
    create(&first,8);
    deleting_duplicate();
    display(first);
    return 0;
}

























