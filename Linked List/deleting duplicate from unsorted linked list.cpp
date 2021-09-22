#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void create(int data)
{
    struct node *temp=new node;
    struct node *last;
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
    cout<<"List is empty";
    else
    {
        while(p!=NULL)
        {
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<endl;
    }
}
struct node * deleteDuplicate()
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    else
    {
        int a[10]={0};
        struct node*p,*q;
        p=head;
        while(p!=NULL)
        {
            if(a[p->data]==0)
                {
                    a[p->data]=1;
                    q=p;
                    p=p->next;
                }
            else
            {
             q->next=p->next;
             p=q->next;
            }
        }
       return head;
    }
}

int main()
{
    create(5);
    create(5);
    create(5);
    create(5);
    //create(5);

    display(head);
    struct node *n=deleteDuplicate();
    display(n);
    return 0;
}

