/*********************************************************************
** Program Filename: main.c
** Author: Nhu Duong
** Date: June 29, 2018
** Description: main function
** Input: None
** Output: None
*********************************************************************/
#include "cal_area.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]) {
	float a,b,c;
	a= atof(argv[1]);
	b= atof(argv[2]);
	c= atof(argv[3]);
	cal_area(a,b,c);
	return 0;
}
