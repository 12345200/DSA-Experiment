#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *link;
};

struct node *head=NULL,*NEW,*temp;

void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
void insert_pos();
void delete_pos();
void traverse();

int main()
{
int ch;
clrscr();
printf("\n1.Insert at begin,\n2.Insert at End,\n3.Deletion from begin,\n4.Deletion from end\n5.insert from specific position,\n6delete at specific position,\n7.traverse,\n8.Exit\n");
  do
  {
	printf("\nEnter the choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
	insert_beg();
	break;

	case 2:
	insert_end();
	break;

	case 3:
	delete_beg();
	break;

	case 4:
	delete_end();
	break;

	case 5:
	insert_pos();
	break;

	case 6:
	 delete_pos();
	break;

	case 7:
	traverse();
	break;

	case 8:
	exit(0);
	  default :printf("Enter the  correct choice");

       }
    }while(ch<9);
    getch();
    return 0;
}

void insert_beg()
{
	int item;
	printf("\nEnter the data: ");
	scanf("%d",&item);
	NEW=(struct node*)malloc(sizeof(struct node));
	NEW ->data=item;
	NEW ->link=head;
	if(head==NULL)
	{
	  head=NEW;
	}
	else
	{
	  NEW->link=head;
	  head=NEW;
	}
  }
void delete_beg()
{
	struct node *temp;
	int pos;
	printf("\nEnter the position that you have to delete: ");
	scanf("%d",&pos);
	if(head==NULL)
	{
	  printf("Linked list is empty");
	}
	else
	{
	temp=head;
	head=head->link;
	printf("\nDeleted element is %d",temp->data);
	free(temp);
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
	struct node *temp ,*prev;
	temp=head;
	while(temp->link!=NULL);
	{
		prev=temp;
		temp=temp->link;
	}
	prev->link=NULL;
	printf("Deleted Element is:%d",temp->data);
	free(temp);

}

void insert_pos()
{
 int pos,i=1;
 struct node *temp;
 printf("enter the  element that u have to insert: ");
 scanf("%d",&pos);
 temp=head;
 while(i<pos-1)
 {
  temp=temp->link;
  i++;
  }
  NEW->link=temp->link;
  temp->link=NEW;
}

 void delete_pos()
 {
  struct node *temp,*pre;
  int i=1,pos;
  printf("Enter the position that you have to delele: ");
  scanf("%d",&pos);
   if(head==NULL)
   {
     printf("Linked list is empty");
   }
   else
   {
    temp=head;
     while(i<pos)
     {
      pre=temp;
       temp=temp->link;
       i++;
     }
     pre->link=temp->link;
     free(temp);
   }
   }

void traverse()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}

