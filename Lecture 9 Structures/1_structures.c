/*
Structures can hold dissimilar data.
    Structures declare a new user defined data type.
    So a structure in C is a collection of variables of different types under a single name.
*/
/*
Why we use structures?
    We can create the data types in the structure sepatatey but when the number of properties in a structure increase, it becomes difficult for us to create daaata variables 
    without structures. In a nut shell:
        1) Structures keep data organised.
        2) Structures make data management easy for programmer.
*/
#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salery;
    char name[20];
};//----------THE SEMICOLON AT THE END OF STRUCT IS IMPORTANT !!!

int main()
{
    struct employee e1;
    e1.code = 100;          // Here the (.) is the member operator.
    e1.salery = 98.568;
    strcpy(e1.name,"Vedant");
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salery); // HERE (%.3f) INCDICATES 3 DECIMAL PLACES THAT ARE TO BE FOLLOWED BY THE INTEGER PART IN THE FLOAT.
    printf("%s\n",e1.name);
    return 0;
}