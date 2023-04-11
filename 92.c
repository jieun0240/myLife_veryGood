#include <stdio.h>
int main() {
	int a = 5;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a > 10)&&(a < 20):%d\n", res);
	res = (a < 10) || (a > 20);
	printf("(a < 10)||(a > 20):%d\n", res);
	res = !(a >= 30);
	printf("! (a >= 30):%d\n", res);
	printf("%d\n", 10 < a < 20);
	printf("%d\n", (10 < a) && (a = 20));
	printf("%d\n", a);
	
	return 0;
}