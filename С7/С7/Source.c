#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef enum { Oily, Watercolor, WaterEmulsion } PAINT_TYPE;

typedef struct 
{
	int x;
	int y;
} Point;

struct Trian
{
	Point a;
	Point b;
	Point c;
};

typedef struct Trian Triangle;

typedef struct 
{
	unsigned on : 1;
	unsigned sd : 1;
	unsigned flash : 1;
	unsigned stick : 1;
} State;

int main()
{
	// 1 задание
	PAINT_TYPE paint = Watercolor;

	printf("%d\n", paint);

	// 2 задание
	Triangle t = { {2, 5}, {7, 9}, {21, 56} };
	float a = sqrt(pow(t.b.x - t.a.x, 2) + pow(t.b.y - t.a.y, 2));
	float b = sqrt(pow(t.c.x - t.b.x, 2) + pow(t.c.y - t.b.y, 2));
	float c = sqrt(pow(t.c.x - t.a.x, 2) + pow(t.c.y - t.a.y, 2));
	printf("P = %f\n", a + b + c);
	
	// 3 задание
	int f;
	int i;
	scanf("%x", &f);

	State CardReader = {
		(bool)(f & 1),
		(bool)(f & 2),
		(bool)(f & 4),
		(bool)(f & 8)
	};
	printf("ON: %d\nSD-card: %d\nCompact Flash: %d\nMemory Stick: %d", 
		CardReader.on, CardReader.sd, CardReader.flash, CardReader.stick);

	return 0;
}