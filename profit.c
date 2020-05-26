#include<stdio.h>
#define dixin 500
//练习：已知某公司员工的保底薪水为500，某月所接工程的利润profit（整数）与利润提成的关系如下（计量单位：元）：
//profit≤1000				没有提成；0
//1000＜profit≤2000		提成10%；1
//2000＜profit≤5000		提成15%；2
//5000＜profit≤10000		提成20%；3
//10000＜profit				提成25%。4

void main()

{
	int  profit,ticheng,grade;
	printf("Input a profit: ");
	scanf("%d", &profit);
	if(profit<=1000)
		grade = 0;
		ticheng = 0;
	if(profit>1000&&profit<=2000)
		grade = 1;
		ticheng = profit*0.1;
	if(profit>2000&&profit<=5000)
		grade = 2;
		ticheng = profit * 0.15;
	if(profit>5000&&profit<=10000)
		grade = 3;
		ticheng = profit * 0.2;
	if(profit>10000)
		grade = 4;
		ticheng = profit * 0.25;
	printf("工资为：%d\n",(dixin+ticheng)); 
	//转化成switch语句中的case标号
	// switch (grade)
	//{
	//case   5: printf("工资为：%d\n",dixin+ticheng); break;
	//case  4: printf("grade=D\n"); break;
	//case  3: printf("grade=D\n"); break;
	//case  2: printf("grade=D\n"); break;
	//case  1:printf("grade=D\n"); break;
	//case   0: printf("grade=E\n"); break;
	//default: printf("The  score  is  out  of  range!\n"); }
}