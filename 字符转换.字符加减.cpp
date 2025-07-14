#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
int main()
{
	char a, A;
	scanf("%c", &a);
	A = a + 'A' - 'a';//使用字符的加减实现
	printf("%c", A);
	return 0;
}