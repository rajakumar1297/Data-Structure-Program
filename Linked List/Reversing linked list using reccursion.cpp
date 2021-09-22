#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;
void create(int x)
{
    struct node *temp,*last;
    temp=new node;
    temp->data=x;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        last=temp;
    }
    else{
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
struct node* deleteMid(struct node* head)
{
    if (head == NULL)
        return NULL;
    if (head->link == NULL)
        {
        delete head;
        return NULL;
        }
    struct node* slow_ptr = head;
    struct node* fast_ptr = head;
    struct node* prev;
    while (fast_ptr != NULL && fast_ptr->link != NULL)
        {
        fast_ptr = fast_ptr->link->link;
        prev = slow_ptr;
        slow_ptr = slow_ptr->link;
       }
    prev->link = slow_ptr->link;
    delete slow_ptr;
    return head;
}
int main()
{
    create(3);
    create(4);
    create(5);
    create(8);
    create(18);
    create(20);
    display(head);
    head=deleteMid(head);
    display(head);
    return 0;
}
