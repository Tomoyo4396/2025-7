#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
int main()
{
	char a, A;
	scanf("%c", &a);
	A = a + 'A' - 'a';//ʹ���ַ��ļӼ�ʵ��
	printf("%c", A);
	return 0;
}