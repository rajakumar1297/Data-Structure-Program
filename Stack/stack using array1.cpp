#include<bits/stdc++.h>
using namespace std;
int top=-1,Stack[10],n;
void push()
{
    if(top==n-1)
        cout<<"Overflow"<<endl;
    else
        {int data;
        cout<<"Enter the data into stack:";
        cin>>data;
        Stack[++top]=data;
        }
}
void pop()
{
    if(top==-1)
        cout<<"underflow"<<endl;
    else;
    {int x=Stack[top];
    cout<<"delete element="<<x<<endl;
    top--;}
}
void display()
{
    if(top==-1)
        cout<<"stack empty"<<endl;
    for(int i=top;i>=0;i--)
        cout<<Stack[i]<<endl;
}
int main()
{
    cout<<"Enter The size of stack:";
    cin>>n;
    while(1)
    {
        cout<<"Stack Operation"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        int ch;
        cout<<"Enter Your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default:cout<<"Wrong Choice";
        }
    }
}
