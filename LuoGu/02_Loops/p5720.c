#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int length = 1;
	scanf("%d", &a);
	while (1)
	{
		if (a == 1)
		{
			break;
		}
		a /=  2;
		length++;
	}
	printf("%d", length);
	return 0;
}
