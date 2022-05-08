#include<stdio.h>
int lcm(int,int);
int main()
{
int no1,no2,lcmm;
printf("enter a number 1");
scanf("%d",&no1);
printf("enter a number 2");
scanf("%d",&no2);
if(no1>no2)
lcmm=lcm(no2,no1);
else
lcmm=lcm(no1,no2);
printf("LCM of %d and %d =%d",no1,no2,lcmm);
return 0;
}
int lcm(int x,int y)
{
static p=0;
p+=y;
if((p%x==0)&&(p%y==0))
{
return p;
}
else
{
lcm(x,y);
}
}
