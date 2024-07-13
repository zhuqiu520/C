#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("愿世界和平，刚好遇见你\n");//printf打印字
	printf("csgo\n");//同上
	printf("%d\n", 886);//%d表示整形函数(整数),打印数字，也可写数字打印出字符
	printf("%d\n",'b');//同上
	printf("%c\n", 99);//%c表示字符函数，数字打出字符,可直接打印字符
	printf("%c\n", 'u');//同上
	printf("%f\n", 3.149527);//%f打印小数，浮点型
	printf("%s\n", "app");//%s打印字符串
	int i =0;//尝试打印多个字符(循环)   “字符是单个，用单引号，字符串是多个，用双引号”

	for (i = 31; i < 121; i++)
	{
		printf("%c ", i);
	}
	return 0;
}