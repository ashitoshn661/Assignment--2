#include<stdio.h>
int main()
{
int x,a,b;
printf("Enter a number: ");
scanf("%d",x);
a = x%10;
b = a & 0;
printf("%d%d",a,b);
return 0;
}
