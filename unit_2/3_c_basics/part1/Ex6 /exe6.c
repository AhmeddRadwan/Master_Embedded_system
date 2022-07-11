//
//  exe6.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

/*
 Write Source Code to Swap Two Numbers

 #########Console_output######
 Enter value of a: 1.20
 Enter value of b: 2.45

 After swapping, value of a = 2.45
 After swapping, value of b = 1.2
 #############################
 */

#include <stdio.h>
int main(){
    float a=0.0,b=0.0,temp=0.0;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, value of a = %.2f \n",a);
    printf("After swapping, value of b = %.1f \n",b);
    return 0;
}
