#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int kor, eng, mat, res;
	printf("�������� : ");
	scanf("%d", &kor);
	printf("�������� : ");
	scanf("%d", &eng);
	printf("�������� : ");
	scanf("%d", &mat);
	double tot;
	res = kor + eng + mat;
	printf("���� : %d\n",res);
	tot = ((double)kor + eng + mat) / 3;
	printf("��� : %.2f\n", tot);
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