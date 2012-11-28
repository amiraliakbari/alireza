#include <stdio.h>

int main()
{
	int a[1000];
	int x;
	int n = 0;
	char cmd[10];
	while (1){
		scanf("%s", &cmd);
		if (cmd[0] == 'p' && cmd[1] == 'u' && cmd[2] == 's' && cmd[3] == 'h' && cmd[4] == '\0'){
			scanf("%d", &x);
			a[n] = x;
			n++;
		} else if (cmd[0] == 'p' && cmd[1] == 'o' && cmd[2] == 'p' && cmd[3] == '\0') {
			printf("%d\n", a[n-1]);
			n--;
		} else {
			printf("Invalid Command!\n");
			break;
		}
	}

	return 0;
}

