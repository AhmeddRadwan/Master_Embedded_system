//
//  exe2.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

/*
 Write C Program to Print a Integer Entered by a User
 i should see the Console as following:
 ##########Console-output###
 Enter a integer: 25
 You entered: 25
 ###########################
 */
#include <stdio.h>
int main(){
    unsigned int number=0;
    printf("##########Console-output###\n");
    printf("Enter a integer: ");
    scanf("%d",&number);
    fflush(stdout);fflush(stdin);
    printf("You entered: %d\n",number);
    printf("###########################\n");
    return 0;
}
