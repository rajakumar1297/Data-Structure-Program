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
void concatnet()
{
    struct node *p=first;
    struct node *q=second;
    while(p->link!=NULL)
    {
        if(p=p->link);

    }
    p->link=q;

}
int main()
{
    create(&first,3);
    create(&first,5);
    create(&first,8);
    create(&second,10);
    create(&second,12);
    create(&second,16);
    concatnet();
    display(first);
    return 0;
}
