#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
�������!!!!!
int main() {
    int a;
    while (scanf("%d", &a) != EOF)
        if (a >= 140) { // ע�� while ������ case
            // 64 λ������� printf("%lld") to 
            printf("Genius\n");
        }
    return 0;
}
�ȴ�С!!!!!
int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        if (a > b) {
            printf("%d>%d\n", a, b);
        }
        else if (a < b) {
            printf("%d<%d\n", a, b);
        }
        else {
            printf("%d=%d\n", a, b);
        }
    }

��������5!!!!
int main() {
    int M;
    scanf("%d", &M);
    if (M % 5 == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
int main()
{
	int a;
		scanf("%d", &a);
		if (a >= 140) {
			printf("Genius");
		}
�����̺�����!!!!!
int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = a / b;
    d = a % b;
    printf("%d %d", c, d);

�㷢���˲���!!!!!
int main()
{
	int a;
	printf("������һ������\n");
	while (scanf("%d", &a))
	{
		if (a >=500) {
			printf("�㷢����\n");
		}
	}  
		
		
			

      return 0;
	
}
��������!!!!!
int main()
{
	int M;
	printf("����������\n");
	while (scanf("%d", &M))
	{
		if (M % 26 == 0)
			printf("YES\n");
		else
			printf("NO\n");


	}  
	

	
	
	return 0;
}
��������!!!!!!!
int main()
{
	int a, b, c, d;
	printf("�������ֵó����\n");
	while (scanf("%d %d", &a, &b))
	{
		if (b == 0)
			printf("���󣬳�������Ϊ0\n");
		continue;
	}
	c = a / b;
	d = a % b;
	printf("%d %d", c, d);
	return 0;
}
���̼����!!!!!
int main()
{
	char name[100];
	int a;
	srand((unsigned int)time(NULL));

 	printf("�������������:\n");
	scanf("%99s", name);
	a = rand() % 240 + 1;
	printf("���������: %d\n", a);
		if (a >180 ) {
			printf("������̱���������\n");
		}
		else if (a >= 140) {
			printf("������ţ�����\n");
		}
		else if (0<a < 80){
			printf("���ź�������һ������\n");
		}
	
	

	return 0;
}

