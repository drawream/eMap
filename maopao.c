#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int i,j,t;
	for(i = 0;i<=10-1;i++)
	{
		for(j=0;j<=10-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;

}