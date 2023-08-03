#include<stdio.h>
int main()
{
	int n,i,a[50],key,flag=0,first,last,mid;
	
	printf("enter number of elements:");
	scanf("%d",&n);
	
	printf("enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the key element:");
	scanf("%d",&key);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==key)
		{
			flag=1;
			break;
		}
		else if(a[mid]<key)
		{
			first=mid+1;
		}
		else if(a[mid>key])
		{
			first=mid-1;
		}
	}
	if (flag==1)
	{
		printf("the key is PRESENT in the list");
	}
	else
	{
		printf("the key is NOT present in the list");
	}
	return 0;
}

