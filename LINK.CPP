#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *head=NULL,*NEW;
int item;
void insert_beg();
void delete_beg();
void insert_end();
void delete_end();
void traverse();
int main()
{
  int ch;
  clrscr();
  printf("\n1.insert_beg,\n2.delete_beg,\n3.insert_end,\n4.delete_end,\n5.traverse,\n6.exit");
  do
  {
  printf("\nEnter the choice:");
  scanf("%d",&ch);
    switch(ch)
    {
    case 1:insert_beg();
	break;
    case 2: delete_beg();
	break;
    case 3: insert_end();
	 break;
    case 4: delete_end();
	break;
    case 5 :traverse();
	break;
    case 6 :exit(0);
    default: printf("Please enter correct choice");
    }
  }while(ch<7);
  getch();
  return 0;
}
    void insert_beg()
    {
    printf("Enter the number: ");
    scanf("%d",&item);
      NEW=(struct node*)malloc(sizeof(struct node));
      NEW->data=item;
      NEW->link=head;
	 head= NEW;
    }

    void delete_beg()
    {
      struct node *pre;
      if (head==NULL)
      {
      printf("There is no linked list ");
      }
      else
      {
	 pre=head;
	 head=head->link;
	 printf("deleted element is %d ",pre->data);
	 free(pre);
      }
    }
    void insert_end()
    {
      struct node *temp;
      if(head==NULL)
      {
       head=NEW;
      }
      else
      {
      temp=head;
      while(temp->link!=NULL)
      {
       temp=temp->link;
      }
      temp->link=NEW;
      }

    }
    void delete_end()
    {


    }
    void traverse()
    {
      struct node *temp;
      if(head==NULL)
      {
	 printf("Linked list is empty");
      }
      else
      {
	temp=head;
	while(temp!=NULL)
	{
	 printf("%d->",temp->data);
	 temp=temp->link;
	}printf("NULL");
      }

    }