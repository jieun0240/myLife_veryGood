#include <stdio.h>
int main() {
	int a = 20;
	int res;

	//&&: 둘다 참이여야만 참을 리턴
	res = (a < 30) & (a > 10);
	printf("%d\n", res);

	res = (a > 10) & (a > 40);
	printf("%d\n", res);

	res != (a > 30) | (a > 40);
	printf("%d\n", res);

	return 0;

}