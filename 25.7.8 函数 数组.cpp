#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����Ķ�����ʹ�ã����庯�������ֵ�뺯��ֵ��һ��
int Max(int a,int b)
{
	int m;
	int p = a - b;
	if (p > 0)
		m = a;
	else
		m = b;
	return m;
}
int main()
{
	int A, B;
	printf("�������������ԱȽϽϴ�ֵ(�Կո����)��");
	scanf("%d %d", &A,&B);
	printf("\n�ϴ�ֵΪ��%d\n",Max(A, B));

	//����ĸ��������ȫ��ʼ����{}��δ���������趨��Ԫ��������ʱ���ճ�����Ĭ��Ϊ��
	int i,z[5];
	printf("����������������");
	for (i = 0; i < 5; i++)
		scanf("%d", &z[i]);
	printf("\n����ķ������Ϊ�� ");
	for (i = 4; i > -1; i--)
		printf("%04d ", z[i]);  //��ʾ���ʱռ�ĸ���ȣ����㲿����0���
	return 0;
}