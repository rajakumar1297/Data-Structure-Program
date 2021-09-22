#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void create(struct stack *s)
{
   printf("Enter the size of Array : ");
   scanf("%d",&s->size);
   s->arr=(int *)malloc(s->size*sizeof(int));
   s->top=-1;

}
void display(struct stack *s)
{

    for(int i=s->top;i>=0;i--)
       printf("%d ",s->arr[i]);
    printf("\n");
}
void push(struct stack *s,int x)
{
    if(s->top==s->size-1)
        printf("Stack is Full...\n");
    else
        s->top++;
        s->arr[s->top]=x;

}
void pop(struct stack *s)
{
    if(s->top==-1)
        printf("Stack is Empty...\n");
    else
        s->top--;
        printf("item deleted successfuly");
}
int main()
{
    struct stack s;
    create(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    display(&s);
    return 0;
}




































