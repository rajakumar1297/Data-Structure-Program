#include<iostream>
using namespace std;
class Diagonal
{
     private:
            int n;
            int *A;
     public:
        Diagonal()
        {
            n=2;
            A=new int[2] ;
        }
        Diagonal(int n)
        {
            this->n=n;
            A=new int[n];
        }
       ~Diagonal()
       {
           delete []A;
       }
       void Set(int i,int j,int x);
       int Get(int i,int j);
       void display();
};
void Diagonal::Set(int i,int j,int x)
{
    if(i==j)
    {
         A[i-1]=x;
    }
}
int Diagonal::Get(int i,int j)
{
    if(i==j)
        return A[i-1];
    else
        return 0;
}
void Diagonal::display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                cout<<A[i]<<" ";
            else
                cout<<("0 ");
        }
        cout<<endl;
    }
}
int main()
{
    Diagonal d(4);
    d.Set(1,1,4);
    d.Set(2,2,8);
    d.Set(3,3,12);
    d.Set(4,4,16);
    d.display();
    return 0;
}


































