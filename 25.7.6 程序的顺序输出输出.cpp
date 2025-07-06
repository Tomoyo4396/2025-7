#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//方法1：使用getchar(),putchar()来输入输出。只能输入输出单字符。
	char a, b;
	printf("输入:");
	a = getchar(), b = getchar();
	printf("输出：");
	putchar(a), putchar(b);

	//方法2：使用scanf()来输入
	// - `%d`：整数（int）                        \
	    - `%f`：单精度浮点数（float）         \
		- `%lf`：双精度浮点数（double）     \
		- `%c`：单个字符（char）                \
		- `%s`：字符串（char 数组）            \
		- `%x`：十六进制整数                       \
		- `% % `：字面量 `%`（类似 `printf`）
		
		//这里只展示使用C语言风格的方法
	char C[100];//在以C语言方式定义字符串时确保一个足够大的缓冲区（例子中为100）
	char D[100];
	printf("\n输入角色名：");
	scanf("%99s", C);//在scanf输入字符串时"%s"中要插入"缓冲区-1"，并且在输入字符串数组时不需要&
	printf("输入编号：");
	scanf("%99s", D);
	char name[200];
	sprintf(name, "%s%s", C, D);//将C,D在新建立的缓冲区name中相连，sprintf的作用是将格式化输出写入字符串（例子中为name）。
	printf("角色名称为：%s", &name);

	return 0;
}