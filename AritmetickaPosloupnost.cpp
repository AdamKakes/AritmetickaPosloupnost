#include<stdio.h>

int main() {
	int a = 0, d = 3;
	for (int i = 1; i <= 20; i++)
	{
		printf("%2d ", a);
		a += d;
	}
}