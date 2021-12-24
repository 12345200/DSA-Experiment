#include<stdio.h>
#include<conio.h>
void swap1(int a,int b);
void swap2(int*A,int*B);
int main()
{
int a,b,ch;
//int *A,*B;
//A=&a;
//B=&b;
clrscr();
do
{
printf("\nEnter 1 for swap1.\nEnter 2 for swap 2\n");

printf("\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the two Digits:\n");
	scanf("%d%d",&a,&b);
	swap1(a,b);
	   break;
case 2 : printf("Enter the two Digits:\n");
	 scanf("%d%d",&a,&b);
	  swap2(&a ,&b);
	     break;
case 3: exit(0);
default:
	printf("You Entered Wrong input");
}
 printf("\nEnter choice 3 for exit");
} while(ch!=3);
getch();
return 0;
}


void swap1(int a,int b)
{ int c;
c=a;
a=b;
b=c;
printf("After swapping in swap1 value of a=%d and b=%d",a,b);

}
void swap2(int*A,int*B)
{     int c;
    c=*A;
    *A=*B;
    *B=c;
printf("After swappping in swap2 value of a=%d and b=%d",*A,*B);
}