#include<stdio.h>

int main()
{
    FILE *ptr;
    int num,num1; 
    ptr = fopen("vedant.txt","r");
    // GOAL: to get the number stored in file andstore it in the vatriable num.
    fscanf(ptr,"%d",&num); // fscanf reads the first data from the file.
    fscanf(ptr,"%d",&num1); // fscanf reads the second data from the file.
    printf("The value of first number stored in the file is %d\n",num);
    printf("The value of second number stored in the file is %d",num1);
    return 0;
}