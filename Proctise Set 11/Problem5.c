/*
Attempt previous problem with calloc()
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *table;
    table = (int *)calloc(10 , sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        table[i] = 7 * (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d\n",i+1,table[i]);
    }

    table = realloc(table, 15 * sizeof(int));
  
    for (int i = 0; i < 15; i++)
    {
        table[i] = 7 * (i+1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("7 X %d = %d\n",i+1,table[i]);
    }
    
    return 0;
}
