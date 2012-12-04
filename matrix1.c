#include <stdio.h>

const int MAX_N = 100 + 1;

void print_matrix(int matrix[][], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++, printf("\n"))
		for (j = 0; j < n; j++)
			printf("%d ", matrix[i][j]);
}

int main()
{	
	//read
	int m, n;
	int i, j;
	//scanf("%d%d", &m, &n);
	m = 2;
	n = 3;
	int a[MAX_N][MAX_N], b[MAX_N][MAX_N];
	printf("============");	
	//solve
	int sum[MAX_N][MAX_N];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			sum[i][j] = a[i][j] + b[i][j];

	//write
	print_matrix(sum, m, n);
	return 0;
}
