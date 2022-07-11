//
//  exe7.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

//write a c program to calculate factorial of a number
#include <stdio.h>
int main(){
    int num=0,i,factorial=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0){
        for(i=1;i<=num;i++)
            factorial*=i;
        printf("factorial = %d\n",factorial);
    }
    else
        printf("Error!!! factorial of negative number doesn't exist.\n");
    return 0;
}
