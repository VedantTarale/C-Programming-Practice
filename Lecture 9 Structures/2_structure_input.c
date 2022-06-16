/*
Write a program to store the details of 3 employees from user defined data. 
*/
#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salery;
    char name[20];
};
int main()
{
    char name[20];
    struct employee e0;
    struct employee e1;
    struct employee e2; 
    for (int i = 0; i < 3; i++)
    {
        if(i == 0){
        printf("Enter the code of employee %d: ",i+1);
        scanf("%d",&e0.code);
        printf("Enter the salery of employee %d: ",i+1);
        scanf("%f",&e0.salery);
        printf("Enter the name of employee %d: ",i+1);
        fflush(stdin);
        gets(name);
        strcpy(e0.name,name);
    }
        if(i == 1){
        printf("Enter the code of employee %d: ",i+1);
        scanf("%d",&e1.code);
        printf("Enter the salery of employee %d: ",i+1);
        scanf("%f",&e1.salery);
        printf("Enter the name of employee %d: ",i+1);
        fflush(stdin);
        gets(name);
        strcpy(e1.name,name);
    }
        if(i == 2){
        printf("Enter the code of employee %d: ",i+1);
        scanf("%d",&e2.code);
        printf("Enter the salery of employee %d: ",i+1);
        scanf("%f",&e2.salery);
        printf("Enter the name of employee %d: ",i+1);
        fflush(stdin);
        gets(name);
        strcpy(e2.name,name);
    }
    }
    printf("Employee1:\t");
    printf("%d\t",e0.code);
    printf("%.3f\t",e0.salery);
    printf("%s\n",e0.name);

    printf("Employee2:\t");
    printf("%d\t",e1.code);
    printf("%.3f\t",e1.salery);
    printf("%s\n",e1.name);

    printf("Employee3:\t");
    printf("%d\t",e2.code);
    printf("%.3f\t",e2.salery);
    printf("%s\n",e2.name);
    return 0;
}