#include <stdio.h>

int main()
{
	// READ
	int n;
	int i;
	int a[1000];
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);

	// SOLVE
	int m1;
	m1=a[0];
	for (i=1; i<n; i++)
		if (a[i]>a[0])
			m1=a[i];

	// OUTPUT
	printf("%d", m1);
	return 0;
}

