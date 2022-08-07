#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d\n",a);
printf("%d",b);
return 0;
}
