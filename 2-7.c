#include<stdio.h>
int main()
{
int n,a;
printf("Enter a number: ");
scanf("%d",&n);
if(n%2==0)
printf("The LSB of the given binary number is 0.");
else
printf("The LSB of the given binary number is 1.");
return 0;
}
