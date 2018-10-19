#include <stdio.h>
#include <math.h>
#include <stdbool.h>

    enum automobile
    {   light,
        high,
        bus,
        speed
    };

    struct coordinates
    {
        float x;
        float y;
    };

struct square
    {
        struct coordinates first;
        struct coordinates second;
        struct coordinates third;
    };

struct printer
    {
        bool ready;
        bool toner;
        bool damagedDrum;
        bool noPaper;
    };

struct coordinates readcoordinates()
    {
        float x, y;
        scanf("%f %f", &x, &y);
        struct coordinates coordinates1 = {x, y};
        return coordinates1;
    }


float distance(struct coordinates coordinates1, struct coordinates coordinates2)
    {
        return sqrt((coordinates2.x - coordinates1.x)*(coordinates2.x - coordinates1.x)* +
        (coordinates2.y - coordinates1.y)*(coordinates2.y - coordinates1.y));
    }



int main()
{
    //1
    enum automobile bus_1;
    bus_1 = bus;
    printf("%d \n", bus_1);
    //2
    double x;
    double y;

    struct square squareStruct = {readcoordinates(), readcoordinates(), readcoordinates()};

    float r = fminf(distance(squareStruct.first, squareStruct.second), distance(squareStruct.first, squareStruct.third)) * 4;
    printf("%f \n", r);

    //3
    int flags;
    scanf("%x", &flags);
    int i = 1;

    struct printer printer1 = {(flags & i), (flags & (i *= 2)),
                               (flags & (i *= 2)), (flags & (i *= 2))};


    printf("\nIs ready:%d, Not enough toner:%d, Damaged drum:%d, No paper:%d", printer1.ready, printer1.toner,
           printer1.damagedDrum, printer1.noPaper);
    return 0;
}