/*
Take thte name and salery of two employees as input from the user and write them to a text file in the following format
    name 1, salery 1
    name 2, salery 2
*/
#include<stdio.h>
typedef struct employee
{
    char name[20];
    int salery;
}emp;
int main()
{   
    FILE *file;
    file = fopen("Problem4.txt","w"); 
    emp e1,e2;
    printf("Enter the name of the first employee: ");
    gets(e1.name);
    printf("Enter the salery of the first employee: ");
    scanf("%d",&e1.salery);
    fflush(stdin);
    printf("Enter the name of the second employee: ");
    gets(e2.name);
    printf("Enter the salery of the second employee: ");
    scanf("%d",&e2.salery);
    fprintf(file,"%s\t",e1.name);
    fprintf(file,"%d\n",e1.salery);    
    fprintf(file,"%s\t",e2.name);
    fprintf(file,"%d\n",e2.salery);    
    return 0;
}