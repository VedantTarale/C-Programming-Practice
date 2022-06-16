/*
Solve the previous problem for a custom input by the user
*/
#include<stdio.h>

int main()
{   
    int a,b,c;
    printf("Enter the first number whose table is desired:");
    scanf("%d",&a);
    printf("Enter the second number whose table is desired:");
    scanf("%d",&b);
    printf("Enter the third number whose table is desired:");
    scanf("%d",&c);
    int tables [3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i==0)
            {
                tables[i][j] = a * (j+1);
            }
            else if (i==1)
            {
                tables[i][j] = b * (j+1);
            }
            else if (i==2)
            {
                tables[i][j] = c * (j+1);
            }
        }
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d\t%d\t%d\n",tables[0][j],tables[1][j],tables[2][j]);
    }
    return 0;
}