#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*Front=NULL,*Rear=NULL;

void enqueue(int x)
{
    struct Node *t=new Node;
    if(t==NULL)
        cout<<"Queue Is Full";
    else
    {
    t->data=x;
    t->next=NULL;
    if(Front==NULL)
        Front=Rear=t;
    else
    {
        Rear->next=t;
        Rear=t;
    }
    }

}
void display()
{
    struct Node *p=Front;
    while(p)
       {
            cout<<p->data<<"->";
            p=p->next;
       }

}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
}
