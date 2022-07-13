//
//  exe-3.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//

#include <stdio.h>
#include <string.h>
int main(){
    char name[25],revers[25];
    int i=0;
    unsigned long j=0;
    printf("Enter a string : ");
    fgets(name, 25, stdin);
    while(name[i]!='\0'){
        j++;
        i++;
    }
    j-=2;
    for(i=0;name[i]!='\0';i++){
        revers[i]=name[j--];
    }
    printf("reverse string is : %s\n",revers);
    return 0;
}
