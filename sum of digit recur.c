#include<stdio.h>
int add(int num)
{
if(num)
{
return(num%10+add(num/10));

}
else{
return 0;
}
}
int main()
{
int num;
printf("enter a number");
scanf("%d",&num);
printf("%d",add(num));
return 0;

}
