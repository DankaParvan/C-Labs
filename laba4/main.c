#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    //1
    int number;
    scanf("%d", &number);

    bool res = (bool)(88/number) * (number/33) * ((sqrt(number * number) / number) + 1);
    if (res ==1)
    {
        printf("Vhodit");
    }else
    {
        printf("Ne vhodit");
    }
    //2
    scanf("%d", &number);
    printf("%d", (bool) ((1 << 20) & number));

    return 0;
}