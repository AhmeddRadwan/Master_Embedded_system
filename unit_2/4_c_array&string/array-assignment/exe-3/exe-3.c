//
//  exe-3.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//
// write c program to transpose of matrix

#include <stdio.h>
int main(){
    int matrix[6][6],trans[6][6];
    int i,j,column=0,row=0;
    printf("Enter rows and column of matrix : ");
    scanf("%d %d",&row,&column);
    printf("Enter the elements of matrix :\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter elements a%d%d : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nEntered matrix \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d \t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix \n");
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){
            trans[i][j]=matrix[j][i];
        }
    }
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){
            printf("%d \t",trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
