#include <stdio.h>

int main()
{
	double m;
	scanf("%lf", &m);

    double ft = m * 3.28083989501;
    double in = m * 39.37008;
    double yd = m * 1.09361;
    double mi = m * 0.000621371;

	printf("%.1lf\n", ft);
	printf("%.1lf\n", in);
	printf("%.1lf\n", yd);
	printf("%.1lf\n", mi);
}
