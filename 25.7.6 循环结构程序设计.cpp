#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//whileѭ��
	int num = 0;
	while (num < 50)
	{
		printf("number = %d\n", num);
		num++;
	}
	if (num >= 50)
		printf("Mission Accomplish\n");

	//do whileѭ��(while���;),do�м�ѭ����ʽ��while�涨ѭ������
	int num1, num2;
	num1 = 1;
	num2 = 0;
	do
	{
		num1 = num2 + num1;
		num2 = num2 + 2;
	}while (num2 < 50);
	printf("num1 = %d\n", num1);
	
	if (num2 >= 50)
		printf("Mission Accomplish\n");

	//forѭ��,�ڲ���;�������ֱ��ʾ��ѭ��������ֵ��ѭ��������ѭ�������仯����
	int i, num3;
	num3 = 0;
	for (i = 0; i <= 50; i = i + 1)
	{
		num3 = num3 + 2;
		printf("num3 = %d\n", num3);
	}
	printf("Mission Accomplish\n");
	return 0;
}