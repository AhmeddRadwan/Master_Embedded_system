#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

struct distance {
    int feet;
    float inch;
    
}first_dis,sec_dis;
int main() {
    struct distance result;
    printf("Enter Information of 1st distance : \n");

    printf("Enter feet : ");
    scanf_s("%d",&first_dis.feet);
    printf("Enter inch : ");
    scanf_s("%f", &first_dis.inch);

    printf("Enter Information of 2nd distance : \n");

    printf("Enter feet : ");
    scanf_s("%d", &sec_dis.feet);
    printf("Enter inch : ");
    scanf_s("%f", &sec_dis.inch);

    if (first_dis.inch + sec_dis.inch > 12) {
        result.feet = first_dis.feet + sec_dis.feet +1;
        result.inch = ((first_dis.inch + sec_dis.inch) - 12);
    }
    else {
        result.feet = first_dis.feet + sec_dis.feet;
        result.inch = first_dis.inch + sec_dis.inch;
    }
    printf("sum of distance = %d'%.1f\" \n", result.feet, result.inch);

    return 0;
}
