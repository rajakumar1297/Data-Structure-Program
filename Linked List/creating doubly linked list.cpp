#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert_at_last(int data)
{
    struct node *temp,*last;
    temp=new node;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        last=temp;
    }
    else
    {
        last->next=temp;
        temp->prev=last;
        last=temp;
    }
}
void insert_at_begin(int data)
{

    struct node *temp,*last;
    temp=new node;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void insert_at_position(int data, int position)
{
    struct node *temp,*last,*p;
    temp=new node;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {

        if(position==0)
        {
            temp->next=head;
            head=temp;
        }
        else
        {   last=head;
            while(position>0)
            {
                p=last;
                last=last->next;
                position--;
            }

            p->next=temp;
            temp->prev=p;
            temp->next=last;
        }

    }
}
void delete_from_begin()
{
    if(head==NULL)
        cout<<"Linked list is empty";
    else
    {
        head=head->next;
        head->prev=NULL;
    }
}
void delete_from_last()
{
    if(head==NULL)
        cout<<"Linked list is empty";
    else
    {
        struct node *p=head;
        struct node *q;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=NULL;
    }
}
void deleting_from_given_position(int position)
{
    if(head==NULL)
        cout<<"Linked list is empty";
    else
    {

        if(position==1)
        {
            head=head->next;
            head->prev=NULL;
        }
        else
        {
            struct node *p=head;
            while(position-1>0)
            {
                p=p->next;
                position--;
            }
            p->prev->next=p->next;
            if(p->next)
                p->next->prev=p->prev;
        }
    }
}
void display(struct node *p)
{
    while(p)
    {
        cout<<"<-"<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    insert_at_last(10);
    insert_at_last(20);
    insert_at_last(30);
    insert_at_last(40);
    insert_at_last(50);
    insert_at_position(5,0);
    insert_at_position(15,2);
    insert_at_position(25,4);
    display(head);
    delete_from_begin();
    display(head);
    delete_from_last();
    display(head);
    deleting_from_given_position(3);
    display(head);
    return 0;
}
