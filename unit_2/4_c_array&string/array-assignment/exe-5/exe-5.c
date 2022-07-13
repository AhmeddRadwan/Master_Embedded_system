//
//  exe-5.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//

#include <stdio.h>
int main(){
    int arr[10],n,i,num;
    printf("Enter no of element : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to searched : ");
    scanf("%d",&num);
    i=0;
    while (i<n) {
        if(num==arr[i]){
            printf("number found at he location = %d\n",i+1);
            break;
        }
        i++;
    }
    if(i==5)
        printf("this number isn't in array\n");
    
    return 0;
}
