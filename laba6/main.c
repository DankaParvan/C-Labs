#include <stdio.h>
#include <stdlib.h> //for malloc
int main()
{
    //1
    int array[] = {0,3,5,7};
    int *pointer = array;
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(pointer + i));
    }
    printf("\n");

    //2
    int* dynamic = malloc(sizeof(pointer));
    for (int i = 0; i < size; i++)
    {
        *(dynamic + i) = *(pointer + i);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(dynamic + i));
    }
    free(dynamic);


    return 0;
}