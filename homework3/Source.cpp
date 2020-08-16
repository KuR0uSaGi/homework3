#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a,b,c,d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	a = a + b;
	b = a - b;
	a = a - b;
	b = b + d;
	d = b - d;
	b = b - d;
	d = c + d;
	c = d - c;
	d = d - c;
	printf("%d %d %d %d", a, b, c, d);

}