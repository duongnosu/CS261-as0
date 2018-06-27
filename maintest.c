#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void cal_area(float x, float y, float z){
	float s;
	float area;

	s= (x+y+z)/2;
	area = sqrt(s*(s-x)*s*(s-y)*s*(s-z));

	printf("Area of triangle is = %f\n", area);
}

int main(int argc, char const *argv[]) {
	float a,b,c;
	a= atof(argv[1]);
	b= atof(argv[2]);
	c= atof(argv[3]);
	cal_area(a,b,c);
	return 0;
}
