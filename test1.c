#include<stdio.h>

int main()
{
	/*
	从键盘输入一个字符
	判断
	大写->小写
	小写 输出
	if else
	*/
	//方法一：if...else...
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

	//方法二：条件表达式
	//printf("%c",(ch>=65&&ch<=90?printf("%c\n",ch+32):printf("%c\n",ch) ));

	//printf("%d %d",'a','z');
	//return 0;

	//任意输入三个数，求最大值

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