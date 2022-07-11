//
//  exe8.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//
// write a c program make a simple calculator
#include <stdio.h>
int main(){
    char ch;
    float num1=0.0,num2=0.0;
    printf("Enter operator either + or - or * or / : ");
    scanf("%c",&ch);
    printf("Enter two operands : ");
    scanf("%f %f",&num1,&num2);
    switch (ch) {
        case '+':
            printf("%.1f + %.1f = %.1f\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f\n",num1,num2,num1*num2);
            break;
        case '/':
            if(num2==0)
                printf("You can't divide by 0\n");
            else
                printf("%.1f / %.1f = %.1f\n",num1,num2,num1/num2);
            break;
        default:
            printf("these operator not define.\n");
            break;
    }
    return 0;
}
