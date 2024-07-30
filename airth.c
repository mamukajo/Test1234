#include<stdio.h>
int add(int,int);
int sub(int,int);

int main()
{
int a,b;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);

printf("the addition is %d",add(a,b));
printf("the addition is %d",sub(a,b));

}

int add(int x,int y)
{
return x+y;

}
int sub(int x,int y)
{
return x-y;

}
