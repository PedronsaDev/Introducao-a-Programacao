#include <stdio.h>

int main()
{
	double a, b, c, x; 
	scanf("%lf %lf %lf %lf", &a, &b, &c, &x);

    double r = a*(x*x) + b*x + c;

	printf("%.2f", r);
}
