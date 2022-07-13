//
//  exe-2.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//
 /*
    write a c program to take number of number from user and store in array and then display the avrage of numbers
  */
#include <stdio.h>
int main(){
    float numbers[25],sum;
    int n,i;
    printf("Enter the number of data : ");
    scanf("%d",&n);
    printf("Enter the number : ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&numbers[0]);
    sum=numbers[0];
    for(i=1;i<n;i++){
        printf("Enter the number : ");
        fflush(stdin);fflush(stdout);
        scanf("%f",&numbers[i]);
        sum+=numbers[i];
    }
    printf("Avrage = %.2f\n",sum/n);
    return 0;
}
