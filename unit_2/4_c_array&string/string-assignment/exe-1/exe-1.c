//
//  exe-1.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//

#include <stdio.h>
int main(){
    char ch;
    char name[50];
    int sum=0,i=0;
    printf("Enter the string : ");
    fflush(stdin);fflush(stdout);
    fgets(name, 50, stdin);
    printf("Enter the character : ");
    scanf("%c",&ch);
    while(name[i]!='\0'){
        if(ch==name[i]){
            sum+=1;
        }
        i++;
    }
    printf("Frequency of %c in = %d\n",ch,sum);
    return 0;
}
