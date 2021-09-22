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
    struct node *temp,*last,*second_last;
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
        second_last=last;
        last=temp;
    }
    last->next=second_last;
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
int isLoop(struct node *p)
{
    struct node *q,*r;
    q=r=p;
    while(q&&r&&q->next)
    {
        q=q->next->next;
        r=r->next;
        if(q==r)
            return true;
    }
    return false;
}
int main()
{
    create(10);
    create(20);
    create(30);
    create(40);
    create(50);
    cout<<isLoop(head);
    return 0;
}
