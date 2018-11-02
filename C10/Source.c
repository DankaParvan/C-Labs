#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdbool.h>

//4 5 
int sumOfDigits(int number)
{
	if (number > 9) 
	{
		return number % 10 + sumOfDigits(number / 10);
	}
	else return number;
}

void replace(char *o_string, char *s_string, char *r_string) 
{
	char buffer[30];
	char *ch;
	strncpy(buffer, o_string, ch - o_string);
	buffer[ch - o_string] = 0;
	sprintf(buffer + (ch - o_string), "%s%s", r_string, ch + strlen(s_string));
	o_string[0] = 0;
	strcpy(o_string, buffer);
}

bool isSpecialSymbol(char *str) 
{
	switch (*str) 
	{
	case ' ':
	case '.':
	case '?':
	case '!': 
	{
		return true;
		break;
	}
	default:
		return false;
	}
}

char *fixString(char *str, bool isSpecial) 
{
	if (str[0] == '\0') 
	{
		return "";
	}
	else if (str[1] == '\0')
	{
		return &str[0];
	}

	if (isSpecial) 
	{
		if (*str == ' ') 
		{
			return fixString(&*(str + 1), isSpecialSymbol(&*(str + 1)));
		}
	}
	char buffer[60];
	strcpy(buffer, &*(str + 1));

	return strcpy(&*(buffer + 30), fixString(buffer, isSpecialSymbol(buffer)));

}


int main() 
{
	int number;
	scanf("%d", &number);
	printf("%d\n", sumOfDigits(number));

	char str[30];
	gets(str);
	char *pointer = str;
	printf("%s", fixString(pointer, false));

	return 0;
}