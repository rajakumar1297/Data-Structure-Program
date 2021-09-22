#include<iostream>
using namespace std;
struct Queue{
  int Size;
  int Front;
  int Rear;
  int *Q;
};
void Create(struct Queue *q,int Size)
{
    q->Q=new int[Size];
    q->Front=q->Rear=0;
}
void enqueue(struct Queue *q,int x)
{
    if((q->Rear+1)%q->Size==q->Front)
        cout<<"Queue is Full";
    else
    {
        q->Rear=(q->Rear+1)%q->Size;
        q->Q[q->Rear]=x;
    }
}
void dequeue(struct Queue *q)
{
    int x=-1;
    if(q->Rear==q->Front)
        cout<<"Queue is Empty";
    else
    {
        q->Front=(q->Front+1)%q->Size;
        x=q->Q[q->Front];
    }
}
void display(struct Queue q)
{
    int i=q.Front+1;
    do{
        cout<<q.Q[i]<<" ";
        i=(i+1)%q.Size;
    }while(i!=(q.Rear+1)%q.Size);

    cout<<endl;
}
int main()
{
    struct Queue q;
    cout<<"Enter the size:";
    cin>>q.Size;
    Create(&q,q.Size);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(q);
    dequeue(&q);
    display(q);

}
