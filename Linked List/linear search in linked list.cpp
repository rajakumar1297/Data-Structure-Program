#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
   int data;
   struct Node *link;
};
struct Node *head=NULL,*p;
void create(int data)
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
void display()
{
     if(head==NULL)
     {
         cout<<"Linked list is empty";
     }
     else{
        p=head;
        while(p!=NULL)
            {
                cout<<p->data<<"->";
                p=p->link;
            }
            cout<<endl;
     }



}
void search(int key)
{
    if(head==NULL)
    {
        cout<<"linked List Is empty";
    }
    else
    {
        struct Node *p=head;
        while(p!=NULL)
        {
            if(key==p->data)
                cout<<"found ..Adress of elements = "<<p->link;
            p=p->link;
        }
    }
}
int main()
{
    create(5);
    create(10);
    create(15);
    create(20);
    display();
    search(15);
    return 0;
}














