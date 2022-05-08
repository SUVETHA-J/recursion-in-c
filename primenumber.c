#include<stdio.h>
int prime(int,int);

int main()
{
int num,i,s=num;
printf("enter a number");
scanf("%d",&num);
i=prime(2,num);
if(i==0)
printf("%d is a prime number ",s);
else
printf("%d is not a prime number",num);
return 0;
}
int prime(int i,int num)
{
if(i==0)
return 0;
else
if(num%i==0)
return 1;
else
return(prime(i+1,num));

}
