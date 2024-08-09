#include <stdio.h>
#include <math.h>
int main()
{
	int n, m, c = 0, r, s = 0;
	printf("enter number: ");
	scanf("%d", &n);
	m = n;

	while (m != 0)
	{
		c++;
		m = m / 10;
	}
	m = n;
	while (m != 0)
	{
		r = m % 10;
		s = s + pow(r, c);
		m /= 10;
	}
	printf(n == s ? "Armstrong" : "not armstrong");
}