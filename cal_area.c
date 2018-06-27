#include "cal_area.h"
#include <stdio.h>
#include <math.h>

void cal_area(float a, float b, float c){
	float s;
	float area;

	s= (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Area of triangle is = %f\n", area);
}
