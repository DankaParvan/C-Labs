#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int Poiskovik(char *string, char symbol)
{
    int Index = strlen(string);
    while ((string[Index] != symbol) && (Index > -1)) Index--;
    if (Index == -1) \
    {
        return -1;
    } else return Index;

}


int main()
{

    //1
    char Massive[25];
    char *Massive_2 = "Doshik ";
    strcpy(Massive, "Rolton");
    strncat(Massive, Massive_2, 5);
    printf("%s\n", Massive);
    //2
    char *string_1 = "Doshik", *string_2 = "Rolton";
    int ppr;
    ppr = strncmp(string_2,string_1,3);
    if (ppr > 0)
        printf("String_1 is bolshe  then string_2 \n");
    else
        printf("String_2 is menshe than String_1 \n");

    //3
    char string[15];
    char *poitner, c = 'r';
    strcpy(string, "String eto stroka");
    poitner = Poiskovik(string, c);
    if (poitner + 1)
        printf("Symbol %c is at position: %d\n", c, poitner);
    else
        printf("404 Symbol not found\n");

    //4
    string_1 = "Doshirak_Is_Tasty";
    string_2 = "Doshirak";
    int dlina;
    dlina = strspn(string_1, string_2);
    printf("Character where strings intersect is at position %d\n", dlina);
    //5
    char input[16] = "doshik,rolton";
    char *p;
    p = strtok(input, ",");
    if (p) printf("%s\n", p);
    p = strtok(NULL, ",");
    if (p)   printf("%s\n", p);


    return 0;
}




