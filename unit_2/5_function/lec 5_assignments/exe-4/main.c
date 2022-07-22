#include<stdio.h>
#include<string.h>
#include <math.h>

int power(int power,int base);
int main() {
	int base, power_number;
	printf("Enter a base number : ");
	scanf_s("%d", &base);
	printf("Enter a power number ");
	scanf_s("%d", &power_number);
	printf("%d ^ %d = %d",base, power_number, power(power_number, base));
}

int power(int power_number, int base) {
	if (power_number == 1)
		return base;
	base *= power(power_number - 1, base);;
	
	
}
