/*
Create an array of 10 numbers. Verify using pointer arithmatic that (ptr+2) points to the third element where ptr is a 
pointer pointing to the first element of the array;
*/
#include<stdio.h>

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &array[0];
    printf("The third element of the array is: %d\n", array[2]);
    printf("The third element of the array as per pointer arithmatic is: %d\n", *(ptr+2));
    if (ptr+2 == &array[2])     
    {
        printf("These addresses point to the same value.");
    }
    else{
        printf("No.");
    }
    
    return 0;
}