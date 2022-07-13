//
//  exe-2.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//

#include <stdio.h>
int main(){
    char name[40];
    int sum=0,i=0;
    printf("Enter a string : ");
    fgets(name, 40, stdin);
    while(name[i]!='\0'){
        sum++;
        i++;
    }
    printf("length of string : %d\n",sum-1);
    
    return 0;
}
