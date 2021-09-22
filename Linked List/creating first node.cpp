#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *Link;
};
struct Node *head=NULL;
void Nodecreate(int data)
{
    struct Node *temp;
    temp=new Node;
    temp->data=data;
    temp->Link=NULL;
    if(head==NULL)
    {

        head=temp;
    }
    else
    {
        temp->Link=head;
        head=temp;
    }
}
void Display()
{
    struct Node *p=head;
    if(p==NULL)
        cout<<"linked list Is empty";
    else
    {
        while(p)
            {
                cout<<p->data<<"->";
                p=p->Link;
            }
            cout<<"\n";
    }


}
void Nodedelete()
{

}
int main()
{

    while(1)
    {   int ch;
        cout<<        "Linked list Operations:) \n";
        cout<<        "1.Insert data into Linked List\n";
        cout<<        "2.Delete data from Linked List\n";
        cout<<        "3.Display\n";
        cout<<        "4.Exit\n";
        cout<<        "Enter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1: int data;
                cout<<"Enter data :";
                cin>>data;
                Nodecreate(data);
                break;
        case 2: Nodedelete();
                break;
        case 3: Display();
                break;
        case 4:exit(0);
                break;
        }
    }
    return 0;
}
