//
//  exe6.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

//write a c program to calculate sum of a natural numbers
#include <stdio.h>
int main(){
    int num=0,i,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
        sum+=i;
    printf("sum = %d\n",sum);
    return 0;
}
