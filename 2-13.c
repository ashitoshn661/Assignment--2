#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter a number : ");
scanf("%d",&x);
y = x % 10;
z = x / 10;
x = y * 100 + z;
printf("Your number is %d",x);
return 0;
}
