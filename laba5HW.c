#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <math.h>
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	double x = -15.246, y = 4.642 * pow(10, -2), z= 20.001 * pow(10,2) , a;
	a = log(pow(y,-sqrt(fabs(x)))) * (x-(y/2)) + pow(sin(atan(z)),2);
	printf("Ваш ответ: %.3lf", a);
}