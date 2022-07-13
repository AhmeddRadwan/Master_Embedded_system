//
//  ex-4.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//
// write a program to insert to an array
#include <stdio.h>
int main(){
    int arr[25];
    int n,num,location,i;
    printf("Enter no of elements : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert in array : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    printf("Enter the location in array : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&location);
    arr[location-1]=num;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
