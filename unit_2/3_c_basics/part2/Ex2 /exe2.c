//
//  exe2.c
//  c basics practice
//
//  Created by ahmed on 11/07/2022.
//

// write a program to check vowel or consonant

#include <stdio.h>
int main(){
  //  const char vowel[5]={'a','e','i','o','u'};
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);
    /*if(ch==vowel[0] || ch==vowel[1] || ch==vowel[2] || ch==vowel[3] || ch==vowel[4] )
        printf("%c is a vowel.\n",ch);
    else
        printf("%c is a consonant.\n",ch);*/
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n",ch);
            break;
        default:
            printf("%c is a consonant.\n",ch);
            
    }
    return 0;
}
