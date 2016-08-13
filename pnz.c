#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter a number:\n");
scanf("%d",&a);
if(a<=0)
{
if(a==0)
printf("You entered zero");
else
printf("%d is negative",a);
}
else
printf("%d is positive",a);
getch();
return 0;
