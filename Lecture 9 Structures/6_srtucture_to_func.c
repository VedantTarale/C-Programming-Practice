/*
Structures can also be passed to functions just as any other data type.
*/
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salery;
    char name[50];
};

void show (struct employee emp )
{
    printf("The code of the employee is: %d\n",emp.code);
    printf("The salery of the employee is: %.2f\n",emp.salery);
    printf("The name of the employee is: %s\n",emp.name);
}


int main()
{
    struct employee e;
    // struct employee *ptr;
    // ptr = &e;
    // (*ptr).code = 101;
    // (*ptr).salery = 101.586;
    // strcpy((*ptr).name,"Qwerty");
    printf("Enter the code of the employee: ");
    scanf("%d",&e.code);
    printf("Enter the salery of the employee: ");
    scanf("%f",&e.salery);
    fflush(stdin);
    printf("Enter the name of the employee: ");
    gets(e.name);
    show(e);
    return 0;
}
