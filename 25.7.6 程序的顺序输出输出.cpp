#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����1��ʹ��getchar(),putchar()�����������ֻ������������ַ���
	char a, b;
	printf("����:");
	a = getchar(), b = getchar();
	printf("�����");
	putchar(a), putchar(b);

	//����2��ʹ��scanf()������
	// - `%d`��������int��                        \
	    - `%f`�������ȸ�������float��         \
		- `%lf`��˫���ȸ�������double��     \
		- `%c`�������ַ���char��                \
		- `%s`���ַ�����char ���飩            \
		- `%x`��ʮ����������                       \
		- `% % `�������� `%`������ `printf`��
		
		//����ֻչʾʹ��C���Է��ķ���
	char C[100];//����C���Է�ʽ�����ַ���ʱȷ��һ���㹻��Ļ�������������Ϊ100��
	char D[100];
	printf("\n�����ɫ����");
	scanf("%99s", C);//��scanf�����ַ���ʱ"%s"��Ҫ����"������-1"�������������ַ�������ʱ����Ҫ&
	printf("�����ţ�");
	scanf("%99s", D);
	char name[200];
	sprintf(name, "%s%s", C, D);//��C,D���½����Ļ�����name��������sprintf�������ǽ���ʽ�����д���ַ�����������Ϊname����
	printf("��ɫ����Ϊ��%s", &name);

	return 0;
}