#include <stdio.h>

const int MAX_N = 100+2;

int main()
{
	//read
	int n, k;
	int a[MAX_N];
	scanf("%d %d", &n, &k);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	//solve
	int b[MAX_N];
	k %= n;
	for (i = 0; i < k; i++)
		b[i] = a[n-k+i];
	for (i = 0; i < n-k; i++)
		b[k + i] = a[i];
	
	// write
	for (i = 0; i < n; i++)
	{
		printf("%d", b[i]);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	return 0;	
}
