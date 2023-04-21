#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int kor, eng, mat, res;
	printf("국어점수 : ");
	scanf("%d", &kor);
	printf("영어점수 : ");
	scanf("%d", &eng);
	printf("수학점수 : ");
	scanf("%d", &mat);
	double tot;
	res = kor + eng + mat;
	printf("총점 : %d\n",res);
	tot = ((double)kor + eng + mat) / 3;
	printf("평균 : %.2f\n", tot);
	if (tot >= 90) {
		printf("A");
	}
	else if (tot >= 80){
		printf("B");
	}
	else if (tot >= 70) {
		printf("C");
	}
	else if (tot >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	//printf(tot >= 70 ? "PASS" : "FAIL");
	return 0;
}