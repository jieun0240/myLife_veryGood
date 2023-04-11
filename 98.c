#include <stdio.h>
int main() {

	int a, b, tot;
	double avg;

	printf("두 과의 점수 : ");
	scanf_s(" %d %d", &a, &b);
	tot = a + b;
	avg = tot / 2.0;

	printf("평균 : %.1lf\n", avg);

	return 0;
}