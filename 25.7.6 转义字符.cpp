#include<stdio.h>
int main()
{
	//����ת���ַ����л�
	printf("Hello,World!\n");
	printf("Hello\\nWorld!\n");//��\\�ķ�ʽʵ��ת���ַ��Ļ�ԭ
	//����ת���ַ�\n(����),\t(�Ƶ���һ��tabλ��),\b(�Ƶ�ǰһ��),\r(�Ƶ����п�ͷ),\f(�������ж�Ӧλ��),\\(����\��),\'(����' ' '),\"(����' " ')
	printf("1.To\nmoyo\n");
	printf("2.To\tmoyo\n");
	printf("3.To\bmoyo\n");
	printf("Tomoyo\r4.yo\n");//\r���м�λ�����Ƶ�����ʱռ��λ
	printf("5.To\fmoyo\n");//����
	return 0;
}