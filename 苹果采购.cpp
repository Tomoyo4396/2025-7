#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c = a * b;
	if (a > 100000000)
		return 0;
	else if (b > 100000000)
		return 0;
	else
		printf("%d", c);
		return 0;
}