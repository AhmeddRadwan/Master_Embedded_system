//
//  main.c
//  array&string
//
//  Created by ahmed on 13/07/2022.
//

/*
    write a c program to find sum of two matrix of order 2*2 using multidimention array, elements of matrix enter by user
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float mat1[2][2],mat2[2][2];
    int i=0,j=0;
    printf("Enter the element of 1st matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d : ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&mat1[i][j]);
        }
    }
    printf("Enter the element of 2nd matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d : ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&mat2[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            mat1[i][j]+=mat2[i][j];
        }
    }
    printf("sum of matrixs \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%.1f \t",mat1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
