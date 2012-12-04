#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int MAX_N = 100 + 1;

bool orbit(char line[])
{
	int n = strlen(line);
	bool r = false;
	int i;	
	for (i = 0; i < n; i++)
	{
		if (i == n-1)
			break;
		if (line[i] == '>' && line [i+1] == '<')
		{
			line[i] = '<';
			line[i + 1] = '>';
			r = true;
			i++;
		}
	}
	return r;
}

/*void f(int x){ x += 1;}*/

int main()
{
/*
	int x = 3;
	print f(x);
	print f(x);

	char s[] = "><<<";
	print orbit(s);
	print orbit(s);
*/

	//read
	int i;
	char line[MAX_N];	
	scanf("%s", &line);

	//solve
	do {
		for (i = 0; i < strlen(line); i++)
			printf("%c ", line[i]);
		printf("\n");
	} while (orbit(line));
	printf("Finish\n");
	return 0;
}
