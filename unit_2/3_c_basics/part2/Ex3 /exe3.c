//
//  exe3.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

// write a program to find largest number among three umbers

#include <stdio.h>
int main(){
    float num1=0,num2=0,num3=0;
    printf("Enter three numbers : ");
    scanf("%f %f %f",&num1,&num2,&num3);
    num1>(num2>num3?num2:num3)?printf("Largest number = %.2f\n",num1):printf("Largest number = %.2f\n",num2>num3?num2:num3);
    return 0;
}
