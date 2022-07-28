#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

struct student {
    char name[16];
    int roll;
    float marks;
    
}sstudent;
int main() {
    printf("Enter Information of student : \n");

    printf("Enter student name : ");
    fgets(sstudent.name,16,stdin);
    printf("Enter student roll : ");
    scanf_s("%d",&sstudent.roll);
    printf("Enter student marks : ");
    scanf_s("%f", &sstudent.marks);

    printf("\n\nDisplay information\n\n");
    printf("name: %s", sstudent.name);
    printf("roll: %d\n", sstudent.roll);
    printf("marks: %.2f\n", sstudent.marks);

    return 0;
}
