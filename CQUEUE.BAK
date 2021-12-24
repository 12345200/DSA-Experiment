#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void traverse();
int queue [size],F=-1,R=-1;
int main()
{
  int ch;
  clrscr();
  while(1)
  {
  printf("enter your choise\n1.enqueue\n2.dequeue\n3.traverse\n4.exit");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:enqueue();
	   break;
    case 2:dequeue();
	  break;
    case 3: traverse();
	  break;
    case 4: exit(0);
	 break;
    default:
	   printf("enter correct choise");
   }
}

}
void enqueue()
{ int num;
  if(F==0 && R==size-1)
  {
    printf("queue is full");
   }
   else
    {
      if(F==-1)
      {  F=0;

      }
      else
      {
	printf("enter your number to insert");
	scanf("%d",&num);
	R=(R+1)%size;
	queue[R]=num;
      }
     }
}
void dequeue()
{  int k;
   if (F==-1  && R==-1)
   {
     printf("queue is empty");
   }
   else
     {
	if(F==R)
	{
	  k=queue[R];
	  F=-1;
	  R=-1;
	  F=(F+1)%size;
	  printf("element is deleted",k);
	}
	else
	{  printf("element is deleted",queue[F]);
	   F=(F+1)%size;
	  }
      }
 }
 void traverse()
{
    int i;
   if(F==-1 && R==-1)
   {
    printf("queue is empty)");
   }
   else
   {   if(F>R)
     {
      for(i=F;i<size;i++)
      {
	printf("%d",queue[i]);
	}
     }
       for(i=F;i<=R;i++)
       {
	printf("\n %d",queue[i]);
	}
    }
}