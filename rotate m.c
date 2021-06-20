#include<stdio.h>

void main()
{
	
	int i,a[50][50],t,n,m,j;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{
			printf("enter value %d%d=",i+1,j+1);
			scanf("%d",&a[i][j]);								//rotate m
			j++;
		}
		i++;
	}
	
	printf("enter value by which to be rotated=");
	scanf("%d",&m);
	
	while(m>0)
	{
		i=n-1;
		while(i>=0)
		{
			j=n-1;
			while(j>0)
			{
				t=a[i][j];
				a[i][j]=a[i][j-1];
				a[i][j-1]=t;
				j--;
			}		
			i--;
		}
		m--;
	}
	
	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{
			printf("%d ",a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
	
}	 
