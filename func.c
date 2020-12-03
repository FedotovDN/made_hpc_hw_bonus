#include "func.h"
#include <math.h>

double a=0.2;
double b=0.4;

double evaluate_model(double x1, double x2, double x3, double x4) {
	return cos(x1) + b * exp(x2) + a * pow(x3, 2) + sin(x1) * pow(x4, 3);
}