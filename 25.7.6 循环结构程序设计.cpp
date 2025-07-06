#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//while循环
	int num = 0;
	while (num < 50)
	{
		printf("number = %d\n", num);
		num++;
	}
	if (num >= 50)
		printf("Mission Accomplish\n");

	//do while循环(while后加;),do中加循环方式，while规定循环规则。
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

	//for循环,内部用;隔开，分别表示（循环变量初值；循环条件；循环变量变化）。
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