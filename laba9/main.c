#include <stdio.h>
#include <stdbool.h>

int main()
{
    //1
    int chislo;
    scanf("%d", &chislo);
    bool array[chislo];
    for (int i = 0; i < chislo; i++)
    {
        array[i] = true;
    }
    array[0] = false;
    array[1] = false;
    for (int i = 2; i < chislo; i++)
    {
        if (array[i])
        {
            for (int j = 2; i * j < chislo; j++)
            {
                array[i * j] = false;
            }
        }
    }
    for (int i = 0; i < chislo; i++)
    {
        if (array[i])
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    //2
    int months;
    float money, percentage;
    scanf("%d %f %f", &months, &money, &percentage);
    percentage /= 12;
    percentage /= 100;

    for (int i = 0; i < months; i++)
    {
        money = money * (1 + percentage);
        printf("%d month - %f $\n", i + 1, money);
    }

    return 0;
}