#include<stdio.h>
int main()
{
	int i,j,k,n,m,l,a[5][5],b[5][5],c[5][5];
	printf("enter the rows nd coloumns:");
	scanf("%d %d %d",&n,&m,&l);
	printf("enter 1st matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matrix:");
	for(j=0;j<m;j++)
	{
		for(k=0;k<l;k++)
		{
			scanf("%d",&b[j][k]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			c[i][k]=0;
			for(j=0;j<m;j++)
			{
				c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
			}
		}
	}
	printf("resultant matrix\n");
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			printf("%d ",c[j][k]);
		}
		printf("\n");
	}
	
}
