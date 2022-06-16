#include<stdio.h>
struct employee
{
    int code;
    float salery;
    char name[20];
};
int main()
{
    struct employee Vedant = {100,99.227,"Vedant"};
    printf("Code: %d\n",Vedant.code);  
    printf("Salery: %.3f\n",Vedant.salery);  
    printf("name: %s",Vedant.name);  
    return 0;
}