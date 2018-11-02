#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//Создать пустой текстовый файл, записать в него массив 10 строк, содержащих даты, увеличивающиеся на 1 день, начиная с сегодняшнего числа.
int main()

{
	int month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = 1;
	int m, d, y, leap = 0;
	int n = 10;
	unsigned int data = 0;

	FILE *output = fopen("file.txt", "w");

	printf("Day: ");
	scanf("%d", &d);
	printf("Month: ");
	scanf("%d", &m);
	printf("Year: ");
	scanf("%d", &y);

	leap = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);

	while (i <= n)
	{
		if (d + 1 > month[m] + (leap && m == 2))
		{
			if (m + 1 > 12)
			{
				m = 1;
				y = y + 1;
				leap = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
			}
			else
			{
				m = m + 1;
				y = y;
			}
			d = 1;
		}
		else
		{
			d = d + 1;
		}
		printf("%02d.%02d.%4d\n", d, m, y);
		fprintf(output, "%02d.%02d.%4d\n", d, m, y);
		++i;
	}

	fclose(output);
	//_getch();

	return 0;

}