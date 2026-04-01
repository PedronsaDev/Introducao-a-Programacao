#include <stdio.h>

int main()
{
	float n1, n2, p1, p2;
	scanf("%f %f %f %f", &n1, &n2, &p1, &p2);
    
    float r = ((n1 * p1) + (n2 * p2)) / (p1 + p2);

	printf("%.2f", r);
}
