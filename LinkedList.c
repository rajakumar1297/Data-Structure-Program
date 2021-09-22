#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head,*last=NULL;

int main()
{
    int ch;
   while(1)
    {
    printf("\nLinked List Operations:-\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    switch(ch)
        {
            case 1:insert();
                   break;
            case 2:delete();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
            default:
                printf("Wrong input...");
        }
    }
}
void insert()
{
    struct node *temp,*ptr;
    int data;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter The data into node:");
    scanf("%d",&data);
    temp->data=data;
    temp->link=NULL;
    if (head==NULL)
       {
          head=temp;
       }
    else
        {

            ptr=head;
            while(ptr->link!=0)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;


        }
}
void delete()
{
    struct node *temp;
    temp=head;
    while(temp->link!=0)
    {
        temp=temp->link;

    }
    free(temp);
}
void display()
{
  if(head==NULL)
    printf("LinkedList is Empty...");
  else
    while(head!=0)
  {
      printf("%d ",head->data);
      head=head->link;
  }
}
































