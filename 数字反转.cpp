#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<algorithm>

int main()
{
	char A[10];
	scanf("%s", A);
	std::string a(A);//���캯����char[]�����std::string
	std::reverse(a.begin(), a.end());
	printf("%s", a.c_str());

	return 0;
}