#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Total(int x, int y)
{
	int t;
	t = x + y;
	return t;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", Total(a, b));
	return 0;
}