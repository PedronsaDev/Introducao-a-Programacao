#include <stdio.h>

int main()
{
	float s;
	scanf("%f",&s);
    
    float r = s + ((s / 100) * 22);

	printf("%.2f", r);
}
