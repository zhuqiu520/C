#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�������!!!!!
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//        if (a >= 140) { // ע�� while ������ case
//            // 64 λ������� printf("%lld") to 
//            printf("Genius\n");
//        }
//    return 0;
//}
//�ȴ�С!!!!!
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) {
//        if (a > b) 
//            printf("%d>%d\n", a, b);
//        
//        else if (a < b) 
//            printf("%d<%d\n", a, b);
//        
//        else 
//            printf("%d=%d\n", a, b);
//        }
//           return 0;
//    }
//////
//��������5!!!!
//int main() {
//    int M;
//    scanf("%d", &M);
//    if (M % 5 == 0) {
//        printf("YES\n");
//    }
//    else {
//        printf("NO\n");
//    }
//int main()
//{
//	int a;
//		scanf("%d", &a);
//		if (a >= 140) {
//			printf("Genius");
//		}
//�����̺�����!!!!!
//int main() {
//    int a, b, c, d;
//    scanf("%d %d", &a, &b);
//    c = a / b;
//    d = a % b;
//    printf("%d %d", c, d);
//
//�㷢���˲���!!!!!
//int main()
//{
//	int a;
//	printf("������һ������\n");
//	while (scanf("%d", &a))
//	{
//		if (a >=500) {
//			printf("�㷢����\n");
//		}
//	}  
//		
//		
//			
//
//      return 0;
//	
//}
//��������!!!!!
//int main()
//{
//	int M;
//	printf("����������\n");
//	while (scanf("%d", &M))
//	{
//		if (M % 26 == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//
//
//	}  
//	
//
//	
//	
//	return 0;
//}
//��������!!!!!!!
//int main()
//{
//	int a, b, c, d;
//	printf("�������ֵó����\n");
//	while (scanf("%d %d", &a, &b))
//	{
//		if (b == 0)
//			printf("���󣬳�������Ϊ0\n");
//		continue;
//	}
//	c = a / b;
//	d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}
//���̼����!!!!!
//int main()
//{
//	char name[100];
//	int a;
//	srand((unsigned int)time(NULL));
//	printf("�����̼��������\n");
// 	printf("�������������:\n");
//	scanf("%99s", name);
//	a = rand() % 220 + 1;
//	printf("���������: %d\n", a);
//		if (a >180 ) {
//			printf("������̱�����������\n");
//		}
//		else if (a<=180 &&a>= 140) {
//			printf("�������ţ���\n");
//		}
//		else if (a>=80 && a<140 ) {
//			printf("��ӵ���������̣�\n");
//		}		
//		else if (a>0 && a<80){
//			printf("���ź�������һ������\n");
//		}
//	
//	
//
//	return 0;
//}
//// ��ӡѭ������
//int main()
//{
//    int a;
//    while (scanf("%d", &a) !=EOF)
//    {
//        int i ;
//        for (i = 0; i < a; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//��ӡһ��֮�����ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//
//
//}
//		
//
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������֣��ÿո�ָ���\n");
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		if (a >= b && a >= c) {
//			if (b >= c) {
//				printf("%d %d %d \n", a, b, c);
//			}
//			else {
//				printf("%d %d %d \n", a, c, b);
//			}
//		}
//		else if (b >= a && b >= c) {
//			if (a >= c) {
//				printf("%d %d %d \n", b, a, c);
//			}
//			else {
//				printf("%d %d %d \n", b, c, a);
//			}
//		}
//		else {
//			if (a >= b) {
//				printf("%d %d %d \n", c, a, b);
//			}
//			else {
//				printf("%d %d %d \n", c, b, a);
//			}
//		}
//	}
//	return 0;
//}