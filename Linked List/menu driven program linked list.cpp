#include<iostream>
#include<stdlib.h>
using namespace std;
void inerst_at_begin(int);
void insert_at_last(int);
void insert_at_given_position(int, int);
void delete_at_begin();
void delete_from_last();
void delete_at_given_position(int);
void display();
void Count_node();

struct Node
{
    int data;
    struct Node *link;
};
struct Node *head=NULL;
void inerst_at_begin(int data)
{
    struct Node *temp;
    temp=new Node;
    temp->data=data;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->link=head;
        head=temp;
    }
}
void insert_at_last(int data)
{
    struct Node *temp,*p;
    temp=new Node;
    temp->data=data;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        p=head;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;


    }
}
void display()
{
    struct Node *p;
    p=head;
    while(p)
    {
        cout<<p->data<<"->";
        p=p->link;
    }
   cout<<"\n";
}
void insert_at_given_position(int data, int position)
{
    struct Node *temp,*p,*q;
    temp=new Node;
    temp->data=data;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        if(position==1)
        {
            temp->link=head;
            head=temp;
        }
        else if(position==2)
        {
            p=head;
            q=p->link;
            p->link=temp;
            temp->link=q;

        }
        else
        {   p=head;
            while(position-2>0)
            {
                p=p->link;
                position--;
            }
            q=p->link;
            p->link=temp;
            temp->link=q;
        }

    }
}
void delete_at_begin()
{
    if(head==NULL)
    {
        cout<<"Linked List is Empty";

    }
    else
    {
        head=head->link;
    }
}
void delete_from_last()
{
   if(head==NULL)
   {
       cout<<"Linked list is empty";
   }
   else
   {
       struct Node *p,*q;
       p=head;
       while(p->link!=NULL)
       {
           q=p;
           p=p->link;
       }
       q->link=NULL;
   }
}
void delete_at_given_position(int position)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty ";

    }
    else
    {  struct Node *p,*q;
       p=head;
       if(p->link==0)
       {
           p=NULL;
       }
       else if(position==1)
       {
           head=head->link;
       }
       else
       {

           while(position-1>0)
           {
               q=p;
               p=p->link;
               position--;
           }
           q->link=p->link;
       }
    }
}
void Count_node()
{
   struct Node *p;
   p=head;
   int c=0;
   while(p)
   {
       c++;
       p=p->link;
   }
   cout<<"Total number of nodes = \n"<<c;
}
int main()
{
    int ch;
    while(1){
    cout<<"Linked List Operations :) \n";
    cout<<"1.Insert data at begining\n";
    cout<<"2.Insert data at Last\n";
    cout<<"3.Insert data at given position\n";
    cout<<"4.delete data at begining\n";
    cout<<"5.delete data from end\n";
    cout<<"6.delete from given position\n";
    cout<<"7.Count number Of Node\n";
    cout<<"8.display all elements\n";
    cout<<"9.Exit\n";
    cout<<"Enter Your Choice: \n";
    cin>>ch;
    switch(ch)
    {
    case 1:
           int data;
           cout<<"Enter Data Into Linked List: ";
           cin>>data;
           inerst_at_begin(data);
           break;
    case 2:
           cout<<"Enter Data Into Linked List: ";
           cin>>data;
           insert_at_last(data);
           break;
    case 3:
           int position;
           cout<<"Enter Data Into Linked List: ";
           cin>>data;
           cout<<"Enter Position:";
           cin>>position;
           insert_at_given_position(data, position);
           break;
    case 4:delete_at_begin();
           break;
    case 5:delete_from_last();
           break;
    case 6:
           cout<<"Enter Position :";
           cin>>position;
           delete_at_given_position(position);
           break;
    case 7:Count_node();
           break;
    case 8:display();
           break;
    case 9:
            exit(0);
            break;
    default:
        cout<<"Wrong choice\n ";
    }
    }
    return 0;
}
