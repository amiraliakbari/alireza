#include <stdio.h>

int main()
{
	// read
	int a[1000];
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	//solve
	int inv = 0;
	int j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				inv++;
		}
			
	
	//write
	printf("%d\n", inv);
	
	return 0;
}

