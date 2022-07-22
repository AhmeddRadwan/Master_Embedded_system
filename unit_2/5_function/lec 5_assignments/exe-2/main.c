#include<stdio.h>
#include <math.h>

int factorinal(int num);
int sum = 1;
int main() {
	int num;
	printf("Enter a positive number : ");
	scanf_s("%d", &num);
	printf("Factorial of %d = %d", num, factorinal(num));
}

int factorinal(int num) {
	if (num == 1)
		return sum;
	else {
		num *= factorinal(num - 1);
	}
}
