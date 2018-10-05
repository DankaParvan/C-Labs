#include <stdio.h>

int main()
{   //1
    int array[] = {0,3,5,7,11,13};
    int size = sizeof(array) / sizeof(int);
    for (int i =0;i<size;i++ )
        printf ("%d ",array[i]);
    printf("\n");;
    //2
    int array_1[2][2]={{1,1},{1,4}};
    int array_2[2][2]={{1,2},{4,1}};
    int result[2][2];
    for (int i =0; i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += array_1[i][k] * array_2[k][j];

            }
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j =0; j<2;j++)
        {
            printf("%d ",result[i][j]);
        }
    }


    return 0;
}