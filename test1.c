#include<stdio.h>

int main()
{
	/*
	�Ӽ�������һ���ַ�
	�ж�
	��д->Сд
	Сд ���
	if else
	*/
	//����һ��if...else...
	//char ch;
	//ch = getchar();  
	/*
	if(ch>=65&&ch<=90)
	{
	printf("Please input a char: ");
	ch = ch + 32;
	printf("%c\n",ch);
	}else if(ch>=97&&ch<=122){
	printf("%c\n",ch);
	}*/

	//���������������ʽ
	//printf("%c",(ch>=65&&ch<=90?printf("%c\n",ch+32):printf("%c\n",ch) ));

	//printf("%d %d",'a','z');
	//return 0;

	//���������������������ֵ

	int num1, num2, num3, temp;
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2) 
	{	temp=num1;
	num1=num2;
	num2=temp;	
	}
	if (num2>num3) 
	{	temp=num2;
	num2=num3;
	num3=temp;
	}
	if (num1>num2) 
	{	
		temp=num1;
		num1=num2;
		num2=temp;
	}
	printf("%d",num3);
	
}