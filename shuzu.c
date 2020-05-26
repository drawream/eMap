//#include<stdio.h>
//
//int main()
//{
//	int a[10];
//	for(int i = 0;i<=9;i++)
//		a[i] = i;
//
//	for(int i = 9;i>=0;i--)
//		printf("%6d\n",a[i]);
//
//	return 0;
//}
#include<stdio.h>
int main( )
{   
	int i,a[10];
    for (i=0;i<=9;i++)
        a[i]=i;

    for (i=9;i>=0;i--)
       	printf("%6d",a[i]);

	    printf("\n");
    return 0;
}
