/*
 * main.c
 *
 *  Created on: Mar 24, 2022
 *      Author: Ahmed_R
 */
#include<stdio.h>
void main()
{
	char choose;
	float radius;
	printf("Enter circle radius : ");
	fflush(stdout);
	scanf("%f",&radius);
	printf("Enter your choice (a to print the area,c to print the circumference) : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&choose);
	switch(choose){
		case 'c':
		case 'C':
		{
			printf("circumference is %f \r\n",2*3.1415*radius);
		}
		break;
		case 'a':
		case 'A':{
		printf("area is %f \r\n ",3.1415*radius*radius);
		}
		break;
		default:{
			printf("this choice isn't avilable\r\n");
		}
		break;
	}
}
