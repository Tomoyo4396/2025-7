#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

void Getcha(int x, char n)
{
	std::string s1 = std::string(x,n);//使用 string库 构造字符串
	int b;
	if (x == 1)
	{
		b = 3;
		printf("% *s\n", b, s1.c_str());//得到的s1是std::string类型字符串对象，使用库中的.c_str()将其转化为C风格的字符串对象
		
	}
	else if (x == 3)
	{
		b = 4;
		printf("% *s\n", b, s1.c_str());
	}
	else
	{
		b = 5;
		printf("% *s\n", b, s1.c_str());
	}
}
int main()
{
	char n;
	scanf("%c", &n);
	Getcha(1, n);
	Getcha(3, n);
	Getcha(5, n);

	return 0;
}