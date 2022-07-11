//
//  exe1.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

// write a c program to check whether a number is odd or even

#include <stdio.h>
int main(){
    int num=0;
    printf("Enter the number you want to check : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is even \n",num);
    else
        printf("%d is odd \n",num);
    return 0;
}
