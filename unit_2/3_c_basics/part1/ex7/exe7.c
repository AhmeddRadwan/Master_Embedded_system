//
//  exe7.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

/*
 Write Source Code to Swap Two Numbers without temp variable.
 */
#include <stdio.h>
int main(){
    float num1,num2;
    printf("Enter value of a: ");
    scanf("%f",&num1);
    printf("Enter value of b: ");
    scanf("%f",&num2);
    num1*=num2;
    num2=num1/num2;
    num1/=num2;
    printf("After swapping, value of a = %.2f \n",num1);
    printf("After swapping, value of b = %.2f \n",num2);
    return 0;
}
