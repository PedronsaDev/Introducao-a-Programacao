#include <stdio.h>

int main()
{
	int h,m;
	scanf("%d %d", &h, &m);

	int r = (h*60) + m;

	printf("%d", r);
}
