#define _CRT_SECURE_NO_WARNLNGS
#include <stdio.h>
int main() {
	int a, b, c;
	printf("a * b = c\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	printf(a * b == c ? "����" : "����");
	return 0;
}