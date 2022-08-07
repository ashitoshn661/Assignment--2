#include<stdio.h>
int main()
{
int x,sum,y;
printf("Enter a number: ");
scanf("%d",&x);
y=x;
while(x)
{
sum = sum+(x%10);
x=x/10;
}
printf("%d%d",y,sum);
return 0;
}
