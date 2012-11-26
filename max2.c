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
	if (n == 1) {
		printf("wrong input\n");
		return 0;
	}

	// SOLVE
	int m1, m2;
	if (a[0] < a[1]) {
		m1 = a[1];
		m2 = a[0];
	} else {
		m1 = a[0];
		m2 = a[1];
	}
	for (i=2; i<n; i++){
		if (a[i]>m2){
			if (a[i] < m1) {
				m2 = a[i];
			} else {
				m2 = m1;
				m1 = a[i];
			}
		}
	}

	// OUTPUT
	printf("%d ", m1);
	printf("%d\n", m2);
	return 0;
}

