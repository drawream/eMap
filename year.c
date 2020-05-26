#include<stdio.h>



//bool isYear(int x)
//{
//	int x;
//	return(((x%4==0)&&(x%100==!0))||(x%400==0));
//}

int main()
{
	int year;
	scanf("%d",&year);
	if(((year%4==0)&&(year%100==!0))||(year%400==0))
		printf("1");
	else
		printf("0");

	
}