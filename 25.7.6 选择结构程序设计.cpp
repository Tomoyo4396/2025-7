#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//添加字符串比较函数
int main()
{
	char input[100];
	printf("是否选择继续前进（回答“是”“否”）：");
	scanf("%s", input);
	if (strcmp(input, "是") == 0)//当strcmp函数对比值相同时，函数结果为0
		printf("注意看路");
	else if (strcmp(input, "否") == 0)
		printf("欢迎回家");
	else
		printf("违反输入规则，请重新输入");
	return 0;
}