#include <stdio.h>

const int MAX_N = 100+2;


void shr(int a[], int n)
{
	int m;
	int i;
	m = a[n - 1];
	for (i = n - 2; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = m;
}



int main()
{
	//read
	int n, k;
	int a[MAX_N];
	scanf("%d %d", &n, &k);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	//printf("read!\n");

	//solve
	k %= n;
	for (i = 0; i < k; i++)
	{
		//printf("i=%d\n", i);
		shr(a, n);
	}
	
	
	// write
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	return 0;	
}
