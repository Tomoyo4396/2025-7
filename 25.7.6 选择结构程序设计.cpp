#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//����ַ����ȽϺ���
int main()
{
	char input[100];
	printf("�Ƿ�ѡ�����ǰ�����ش��ǡ����񡱣���");
	scanf("%s", input);
	if (strcmp(input, "��") == 0)//��strcmp�����Ա�ֵ��ͬʱ���������Ϊ0
		printf("ע�⿴·");
	else if (strcmp(input, "��") == 0)
		printf("��ӭ�ؼ�");
	else
		printf("Υ�������������������");
	return 0;
}