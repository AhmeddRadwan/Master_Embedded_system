/*
 * main.c
 *
 *  Created on: Mar 24, 2022
 *      Author: Ahmed_R
 */
#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("please, Enter the 3 numbers \r\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d %d",&num1,&num2,&num3);
	fflush(stdout);
	fflush(stdin);
	printf("The largest number is %d",num1>num2?num1>num3?num1:num3:num2>num3?num2:num3);
}
