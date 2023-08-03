#include<stdio.h>
#include<math.h>
int main()
{
	int re,i,n,temp,c=0,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		c++;
		temp=temp/10;
	}
	temp=n;
	while(temp>0)
	{
		re=temp%10;
		sum=sum+pow(re,c);
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("%d is armstrong number",n);
	}
	else
	{
		printf("%d is not an armstrong number",n);
	}
	return 0;
}
