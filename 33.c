#include<stdio.h>
#include<conio.h>
int main()
{
	int a, rows, c;
	printf("enter number of rows : ");
	scanf("%d",&rows);
	for(a=1; a<=rows; a++)
	{
		for(c=a; c>=1; c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	return 0;
}
