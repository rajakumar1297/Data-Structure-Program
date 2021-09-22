#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;
void create(int data)
{
    struct node *temp,*last;
    temp=new node;
    if(first==NULL)
    {
        temp->data=data;
        temp->link=first;
        first=temp;
        last=temp;
    }
    else
    {
        temp->data=data;
        last->link=temp;
        temp->link=first;
        last=temp;
    }
}
void display(struct node *p)
{

    do
    {
        cout<<p->data<<"->";
        p=p->link;
    }while(p!=first);
    cout<<endl;
}
void recursive_display(struct node *p)
{
    static int flag=0;
    if(p!=first || flag==0)
    {
        flag=1;
        cout<<p->data<<"->";

        recursive_display(p->link);
    }
    flag=0;
}

int main()
{
    create(2);
    create(8);
    create(10);
    create(15);
    //display(first);
    recursive_display(first);
    return 0;
}


























