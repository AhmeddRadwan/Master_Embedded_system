//
//  exe5.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

// write c program to check character is aphabet or not
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>=65&&ch<=122)
        printf("%c is a character.\n",ch);
    else
        printf("%c is not a character.\n",ch);
    return 0;
}
