/*
Create an array of sixe 3 X 10 containing multiplication table of the numbers 2,7,9
*/
#include<stdio.h>

int main()
{
    int tables [3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i==0)
            {
                tables[i][j] = 2 * (j+1);
            }
            else if (i==1)
            {
                tables[i][j] = 3 * (j+1);
            }
            else if (i==2)
            {
                tables[i][j] = 9 * (j+1);
            }
        }
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d\t%d\t%d\n",tables[0][j],tables[1][j],tables[2][j]);
    }
    return 0;
}