//
//  exe3.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

/*
 Write C Program to Add Two Integers

 i should see the Console as following:
 ##########Console-output###
 Enter two integers: 12
 11
 Sum: 23
 ###########################
 */
#include <stdio.h>

int main(){
    int number_1=0,number_2=0;
    printf("##########Console-output###\n");
    printf("Enter two integers: ");
    scanf("%d",&number_1);
    fflush(stdout);fflush(stdin);
    scanf("%d",&number_2);
    number_1+=number_2;
    printf("sum : %d\n",number_1);
    printf("###########################\n");
    return 0;
}
