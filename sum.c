#include <stdio.h>

int main()
{
	// READ
	int n;
	int a[1000];
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);

	// SOLVE
	int sum = 0;
	float m;
	for(int i=0; i<n; i++)
		sum += a[i];
	m = sum * 1.0 / n;

	// OUTPUT
	printf("%f\n", m);
	return 0;
}

