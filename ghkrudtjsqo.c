#include <stdio.h>
int main() {
	int a;
	printf("점수를 입력하시오 :");
	scanf_s("%d", &a);
	if (a >= 90) {
		printf("A");
	}
	else if (a >= 80){
		printf("B");
	}
	else if (a >= 70){
		printf("C");
	}
	else if (a >= 60){
		printf("D");
	}
	else{
		printf("F");
	}
	return 0;
	
}