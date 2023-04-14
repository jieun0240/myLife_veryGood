#include <stdio.h>
int main() {
	int seats = 70, audience = 65;
	double rate= (double)audience / (double)seats * 100.0;
	
	printf("ÀÔÀå·ü : %.1lf%%", rate);
	return 0; 
} 