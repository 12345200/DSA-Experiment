#include<stdio.h>
#include<conio.h>
#define size 5
#include<stdlib.h>
void enque();
void deque();
void traverse();
int queue[size],R=-1,F=-1;
int  main ()
{
  int ch;
  clrscr();
  while(1)
  {
  printf("enter your choise\n1.enque\n2.deque\n3.traverse\n4.exit");
  scanf("%d",&ch);
     switch(ch)
     {
       case 1: enque();
	      break;
       case 2 : deque();
	     break;
       case 3 :traverse();
	    break;
       case 4 : exit(0);
	    break;
	   default:printf("wrong choise");
	   }
	   }
	   }
  void enque()
  {
    int ele;
    if (R==size-1)
    {
      printf("queue is full");
     }
     else
     {
     if(F=-1)
     {
      F++;
      }
     printf("enter the element");
     scanf("%d",&ele);

  queue[R]=ele;
      R++;
      }
    }
 void deque()
 {
  if(R==-1 && R==-1)
  {
    printf("queue is empty");
  }
  else
  {
  printf("deleted element is ",queue[F]);
  F++;
  }
 }
  void traverse()
  {
   int i;

    printf("elemants are");
    for(i=F;i<=R;i++);
    {
      printf("\t %d",queue[i]);

     }
   }
