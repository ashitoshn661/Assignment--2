#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter a three digit number: ");
scanf("%d",&n);
while(n!=0)
{
sum=sum + (n%10);
n=n/10;
}
printf("The number is %d.",sum);
return 0;
}
