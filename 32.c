#include<stdio.h>
int main()
{
	int a, b;
	for (a = 1; a <= 35; a++)
	{
		b = 35 - a;
		if (a*4+b*2==94)
		{
			printf("ÍÃ×Ó£º%d\n  ¼¦£º%d\n", a, b);
		}
	}
	return 0;
}