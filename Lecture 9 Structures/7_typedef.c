#include<stdio.h>
typedef struct employee
{
    int code;
    float salery;
    char name[20];
}emp;
void show (struct employee empl ) //NOTE THAT A  COPY OF THE STRUCT IS SENT INTO THE FUNCTION AND NO THE ORIGINAL VALUES. TO CHANGE THE ORIGINAL VALUES USE CALL BY REFERENCE.
{
    printf("The code of the employee is: %d\n",empl.code);
    printf("The salery of the employee is: %.2f\n",empl.salery);
    printf("The name of the employee is: %s\n",empl.name);
}
int main()
{

    emp e;
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