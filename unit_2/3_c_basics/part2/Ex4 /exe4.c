//
//  exe4.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

// write c program to check number positive or negative
#include <stdio.h>
int main(){
    float num;
    printf("Enter a number : ");
    scanf("%f",&num);
    if(num>0)
        printf("%.2f is a positive.\n",num);
    else if(num==0)
        printf("You entered zero.\n");
    else
        printf("%.2f is a Negative.\n",num);
    return 0;
}
