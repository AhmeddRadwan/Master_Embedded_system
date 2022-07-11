//
//  exe4.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

/*
 Write C Program to Multiply two Floating Point Numbers
 i should see the Console as following:
 ##########Console-output###

 ###########################
 Enter two numbers: 2.4
 1.1
 Product: 2.640000
 ########################################################################
 */
#include <stdio.h>
int main(){
    float number1=0.0,number2=0.0;
    printf("##########Console-output###\n\n");
    printf("###########################\n");
    printf("Enter two numbers: ");
    scanf("%f %f",&number1,&number2);
    number1*=number2;
    printf("Product: %6f\n",number1);
    
    return 0;
}
