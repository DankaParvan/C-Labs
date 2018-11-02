#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 3 6 7 10 13
int main()
{
	int n;
	char str1[255];
	char str2[255];
	printf("Enter first string: ");
	gets_s(str1, 255);
	printf("Enter next string: ");
	gets_s(str2, 255);

	// 3
	int cmp = strcmp(str1, str2);
	if (cmp < 0)
	{
		printf("First string is bigger\n");
	}
	else
	{
		if (cmp > 0)
		{
			printf("First string is lower\n");
		}
		else
		{
			printf("Strings are equals\n");
		}
	}

	// 6
	printf("Enter n: ");
	scanf("%d", &n);
	strncpy(str2, str1, n);
	printf("Result string: %s\n", str2);

	// 7
	printf("Length of first string: %d\n", strlen(str1));

	// 10
	printf("Substring of first string: %s\n", strstr(str1, str2));

	//13
	char* item, *pos;
	char* delimiters = " ,";
	item = strtok_s(str1, delimiters, &pos);
	while (item != NULL)
	{
		printf("%s\n", item);
		item = strtok_s(NULL, delimiters, &pos);
	}
	_getch();
	return 0;
}