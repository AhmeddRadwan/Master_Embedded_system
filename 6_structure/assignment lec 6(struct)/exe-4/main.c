#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

struct student {
    char name[16];
    int roll;
    float marks;

}sstudent[2];
int main() {
    int i;
    for (i = 0; i < 2; i++) {
        printf("Enter Information of student %d : \n",i+1);

        printf("Enter student name : ");
        scanf("%s", &sstudent[i].name);
        printf("Enter student roll : ");
        scanf_s("%d", &sstudent[i].roll);
        printf("Enter student marks : ");
        scanf_s("%f", &sstudent[i].marks);
    }
    for (i = 0; i < 2; i++) {
        printf("\n\nDisplay information of student %d\n\n",i+1);
        printf("name: %s\n", sstudent[i].name);
        printf("roll: %d\n", sstudent[i].roll);
        printf("marks: %.2f\n", sstudent[i].marks);
    }
    return 0;
}
