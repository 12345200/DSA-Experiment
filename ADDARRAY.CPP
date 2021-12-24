#include<stdio.h>
#include<conio.h>
int main()
{
  int i,sum=0,a[100],size;
  clrscr();
  printf("enter the size of array");
  scanf("%d",&size);
  printf("enter the array elements");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
    }
  for(i=0;i<size;i++)
   {
    sum=sum+a[i];
    }
 printf("the sum of array is %d",sum);
 getch();



 return 0;
 }





