#include <stdio.h>

const int MAX_N = 101;

int main()
{
	char c;
	char s[MAX_N];
	scanf("%c", &c);
	int d = (int) c;
	d = c - '0';
	printf("%f\n", d);
	return 0;
}

