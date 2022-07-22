#include<stdio.h>
#include <math.h>
void prime_number(int num1, int num2);
int main() {
	
	int num1, num2;
	printf("Enter two numbers (intervals) : ");
	scanf_s("%d %d", &num1, &num2);
	printf("Prime number between %d and %d are : ", num1, num2);
	prime_number(num1, num2);
}
void prime_number(int num1, int num2) {
	int i, j, flag=1;
	j = num1 > num2 ? num1 : num2;
	for (i = num1 < num2 ? num1 : num2; i < num2; i++) {
		for (j = 2; j <= (int)sqrt(i); j++)
			if (i % j ==0) {
				flag = 0;
				break;
			}
			else {
				flag = 1;
			}
		if(flag==1)
			printf("%d ", i);
	}
}