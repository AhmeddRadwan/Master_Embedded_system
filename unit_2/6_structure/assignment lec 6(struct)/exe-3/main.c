#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
struct complex_number {
    float real;
    float imaginary;
    
};
struct complex_number add_complex(struct complex_number num1, struct complex_number num2);
int main() {
    struct complex_number num1, num2,result;
    printf("For the 1st complex number : \n");
    printf("Enter real and imaginary respectively : ");
    scanf_s("%f %f", &num1.real, &num1.imaginary);
    printf("For the 2nd complex number : \n");
    printf("Enter real and imaginary respectively : ");
    scanf_s("%f %f", &num2.real, &num2.imaginary);
    result = add_complex(num1, num2);
    printf("Sum = %.1f+%.1fi\n",result.real,result.imaginary);

    return 0;
}
struct complex_number add_complex(struct complex_number num1, struct complex_number num2) {
    struct complex_number result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}