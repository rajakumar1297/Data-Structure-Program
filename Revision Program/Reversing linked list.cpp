#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(int data)
{
    struct node *temp,*last;
    temp=new node;
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
        last=temp;
    }
}
void display(struct node *p)
{
    if(p==NULL)
        cout<<"linked list is empty";
    else{
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->next;
        }
    }

}
struct node *Reverse()
{
    if(head==NULL)
        return NULL;
    else if(head->next==NULL)
        return head;
    else if(head->next->next==NULL)
    {
        struct node* a=head;
        struct node* b=head->next;
        a->next=NULL;
        b->next=a;
        head=b;
        return head;
    }
    else
    {
        struct node *a,*b,*c;
        a=head;
        b=c=NULL;
        while(a!=NULL)
        {
            c=b;
            b=a;
            a=a->next;
            b->next=c;
        }
        head=b;
        return head;
    }

}
int main()
{
    create(10);
    create(20);
    create(30);
    create(40);
    create(50);
    display(head);
    display(Reverse());
    return 0;
}
