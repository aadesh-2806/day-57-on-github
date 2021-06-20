#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],j,n,t;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	if(n%2==0)
	{
		for(i=(n/2);i<n;i++)
		{
			printf("%d ",a[i]);
			printf("%d ",a[n-i-1]);
		}
	}
	else
	{
		for(i=(n-1)/2;i<n-1;i++)
		{
			printf("%d ",a[i]);
			printf("%d ",a[n-i-2]);
		}
		printf("%d ",a[i]);
	}
	getch();
}
