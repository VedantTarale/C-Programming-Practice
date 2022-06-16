#include<stdio.h>

int main()
{
    int nstudents = 3;
    int nsubjects = 5;

    int marks [3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the marks of student %d in subject %d: ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
        
    }
    for (int i = 0; i < nstudents; i++)
    {
        for (int j = 0; j < nsubjects; j++)
        {
            printf("The marks of student %d in subject %d are: %d\n",i+1,j+1,marks[i][j]);
        }
        
    }
    
    return 0;
}