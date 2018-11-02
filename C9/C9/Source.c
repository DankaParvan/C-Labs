#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define FREE_TIME 499

int main()
{
	//2
	/*
	int tmp;
	int time;
	int price;
	int overPrice;
	int cost = 0;
	scanf("%d", &time);
	scanf("%d", &price);
	scanf("%d", &overPrice);
	for (int i = 0; i < 30; i++)
	{
		scanf("%d", &tmp);
		time += tmp;
	}
	cost = ((time - FREE_TIME) * overPrice) + price;
	printf("Total cost: %d", cost);
	*/

	//5
	int monthCount;
	float percentage;
	float startBalance;
	scanf("%f", &startBalance);
	scanf("%d", &monthCount);
	scanf("%f", &percentage);
	percentage /= 12;
	percentage /= 100;
	for (int i = 0; i < monthCount; i++)
	{
		startBalance *= (1 + percentage);
		printf("Month %d Account = %.2f\n", i+1, startBalance);
	}
	_getch();
	return 0;
}