//
//  exe5.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

/*
 Write C Program to Find ASCII Value of a Character

 #########Console_output######
 Enter a character: G
 ASCII value of G = 71
 #############################

 */
#include <stdio.h>
int main(){
    unsigned char ch;
    printf("#########Console_output######\n");
    printf("Enter a character:");
    fflush(stdin);fflush(stdout);
    scanf("%c",&ch);
    printf("ASCII value of %c = %d\n",ch,ch);
    printf("#############################\n");
    return 0;
}
