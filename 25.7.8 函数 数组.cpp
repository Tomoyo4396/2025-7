#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的定义与使用，定义函数的输出值与函数值需一致
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
	printf("请输入两个数以比较较大值(以空格隔开)：");
	scanf("%d %d", &A,&B);
	printf("\n较大值为：%d\n",Max(A, B));

	//数组的概念；当不完全初始化（{}中未填满数组设定的元素数量）时，空出来的默认为零
	int i,z[5];
	printf("输入五个数组成数组");
	for (i = 0; i < 5; i++)
		scanf("%d", &z[i]);
	printf("\n数组的反序输出为： ");
	for (i = 4; i > -1; i--)
		printf("%04d ", z[i]);  //表示输出时占四个宽度，不足部分用0填充
	return 0;
}