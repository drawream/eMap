#include<stdio.h>
#define dixin 500
//��ϰ����֪ĳ��˾Ա���ı���нˮΪ500��ĳ�����ӹ��̵�����profit����������������ɵĹ�ϵ���£�������λ��Ԫ����
//profit��1000				û����ɣ�0
//1000��profit��2000		���10%��1
//2000��profit��5000		���15%��2
//5000��profit��10000		���20%��3
//10000��profit				���25%��4

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
	printf("����Ϊ��%d\n",(dixin+ticheng)); 
	//ת����switch����е�case���
	// switch (grade)
	//{
	//case   5: printf("����Ϊ��%d\n",dixin+ticheng); break;
	//case  4: printf("grade=D\n"); break;
	//case  3: printf("grade=D\n"); break;
	//case  2: printf("grade=D\n"); break;
	//case  1:printf("grade=D\n"); break;
	//case   0: printf("grade=E\n"); break;
	//default: printf("The  score  is  out  of  range!\n"); }
}