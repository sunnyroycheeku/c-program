#include<stdio.h>
#include<conio.h>
int main()
{
int n,Revese = 0 ,remainder,reverse;
printf("Enter an integer");
scanf("%d",&n);
while(n!=0)
{
	remainder=n%10;
    reverse = reverse*10+remainder;
 	n/=10;
 }
 printf("reversed number=%d",reverse);
 return 0;
}
