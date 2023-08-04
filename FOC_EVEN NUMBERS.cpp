#include<stdio.h>
int main()
{
	int N,i;
	printf("enter the number:");
	scanf("%d",&N);
	for(i=0;i<=N;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
    }
	return 0;
	
}
