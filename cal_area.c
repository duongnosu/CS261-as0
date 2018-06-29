/*********************************************************************
** Program Filename: cal_area.c
** Author: Nhu Duong
** Date:June 29, 2018
** Description: Calculating the area of the triangle and print it out
** Input: sides a, b, c
** Output: area
*********************************************************************/
#include "cal_area.h"
#include <stdio.h>
#include <math.h>

/*********************************************************************
** Function: cal_area
** Description: Calculating Area of triangle with given sides
** Parameters: side a, b, c
** Pre-condition: cal_area declared in cal_area.h
** Post-condition: None
*********************************************************************/
void cal_area(float a, float b, float c){
	float s;
	float area;

	s= (a+b+c)/2;

	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Area of triangle is = %f\n", area);
}
