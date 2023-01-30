#include<stdio.h>
int main()
{
	int N,M,i;
	printf("Enter M value:");
	scanf("%d",&M);
	printf("Enter N value:");
	scanf("%d",&N);	
	for(i=1;i<=N;i++)
	{
		printf("%d X %d = %d\n",i,M,i*M);
	}
	return 0;
