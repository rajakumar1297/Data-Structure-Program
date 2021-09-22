#include<iostream>
using namespace std;
struct Queue{
  int Size;
  int Front;
  int Rear;
  int *Q;
};

void enqueue(struct Queue *q,int x)
{
    if(q->Rear==q->Size-1)
        cout<<"Queue Is Full...";
    else
    {
        q->Rear++;
        q->Q[q->Rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->Front==q->Rear)
        cout<<"Queue is empty";
    else
    {
        q->Front++;
        x=q->Q[q->Front];

    }
    return x;
}
void display(struct Queue q)
{
    if(q.Front==q.Rear)
        cout<<"Queue is empty...";
    else
    {
        for(int i=q.Front+1;i<=q.Rear;i++)
            cout<<q.Q[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    struct Queue q;
    cout<<"Enter the size of queue: ";
    cin>>q.Size;
    q.Q=new int[q.Size];
    q.Rear=q.Front=-1;
    enqueue(&q,5);
    enqueue(&q,10);
    enqueue(&q,15);
    enqueue(&q,20);
    display(q);
    dequeue(&q);
    display(q);
}
