#include<stdio.h>
int main()
{
	//对于转义字符的切换
	printf("Hello,World!\n");
	printf("Hello\\nWorld!\n");//以\\的方式实现转义字符的还原
	//常用转义字符\n(换行),\t(移到下一个tab位置),\b(移到前一列),\r(移到本行开头),\f(换到下行对应位置),\\(代表‘\’),\'(代表' ' '),\"(代表' " ')
	printf("1.To\nmoyo\n");
	printf("2.To\tmoyo\n");
	printf("3.To\bmoyo\n");
	printf("Tomoyo\r4.yo\n");//\r后有几位，在移到行首时占几位
	printf("5.To\fmoyo\n");//换到
	return 0;
}