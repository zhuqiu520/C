#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("Ը�����ƽ���պ�������\n");//printf��ӡ��
	printf("csgo\n");//ͬ��
	printf("%d\n", 886);//%d��ʾ���κ���(����),��ӡ���֣�Ҳ��д���ִ�ӡ���ַ�
	printf("%d\n",'b');//ͬ��
	printf("%c\n", 99);//%c��ʾ�ַ����������ִ���ַ�,��ֱ�Ӵ�ӡ�ַ�
	printf("%c\n", 'u');//ͬ��
	printf("%f\n", 3.149527);//%f��ӡС����������
	printf("%s\n", "app");//%s��ӡ�ַ���
	int i =0;//���Դ�ӡ����ַ�(ѭ��)   ���ַ��ǵ������õ����ţ��ַ����Ƕ������˫���š�

	for (i = 31; i < 121; i++)
	{
		printf("%c ", i);
	}
	return 0;
}