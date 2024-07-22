#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//你是天才!!!!!
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//        if (a >= 140) { // 注意 while 处理多个 case
//            // 64 位输出请用 printf("%lld") to 
//            printf("Genius\n");
//        }
//    return 0;
//}
//比大小!!!!!
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
//整数除以5!!!!
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
//计算商和余数!!!!!
//int main() {
//    int a, b, c, d;
//    scanf("%d %d", &a, &b);
//    c = a / b;
//    d = a % b;
//    printf("%d %d", c, d);
//
//你发财了测试!!!!!
//int main()
//{
//	int a;
//	printf("请输入一个数字\n");
//	while (scanf("%d", &a))
//	{
//		if (a >=500) {
//			printf("你发财啦\n");
//		}
//	}  
//		
//		
//			
//
//      return 0;
//	
//}
//整除测试!!!!!
//int main()
//{
//	int M;
//	printf("请输入数字\n");
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
//除法运算!!!!!!!
//int main()
//{
//	int a, b, c, d;
//	printf("输入数字得出结果\n");
//	while (scanf("%d %d", &a, &b))
//	{
//		if (b == 0)
//			printf("错误，除数不能为0\n");
//		continue;
//	}
//	c = a / b;
//	d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}
//智商检测器!!!!!
//int main()
//{
//	char name[100];
//	int a;
//	srand((unsigned int)time(NULL));
//	printf("《智商检测仪器》\n");
// 	printf("请输入你的名字:\n");
//	scanf("%99s", name);
//	a = rand() % 220 + 1;
//	printf("你的智商是: %d\n", a);
//		if (a >180 ) {
//			printf("你的智商爆表啦！！！\n");
//		}
//		else if (a<=180 &&a>= 140) {
//			printf("你就是天才！！\n");
//		}
//		else if (a>=80 && a<140 ) {
//			printf("你拥有正常智商！\n");
//		}		
//		else if (a>0 && a<80){
//			printf("很遗憾，你是一个弱智\n");
//		}
//	
//	
//
//	return 0;
//}
//// 打印循环符号
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
//打印一百之中三的倍数
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
//	printf("请输入三个数字，用空格分隔：\n");
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