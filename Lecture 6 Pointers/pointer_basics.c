/*
A POINTER IS A VARIABLE WHICH STORES THE ADRESS OF ANOTHER VARIABLE
THE "ADDRESS OF" OPERATOR IS USED TO OBTAIN THE ADRESS OF A GIVEN VARIABLE.
&i => ADDRESS OF i
&j => ADDRESS OF j (WHERE J IS A POINTER AND STORES THE ADDRESS OF i)

THE FORMAT SPECIFIER FOR POINTER IS %u.

THE "Value at address" or "*" OPERATOR IS USED TO OBTAIN THE VALUE PRESENT AT A GIVEN MEMORY ADDRESS.
 *(&i) => the value stored at the adress of veriable i.

HOW TO DECLARE A PONIER?
=> A POINTER IS DECLARD BY USING THE FLOOLWING SYNTAX
    => int *j;      => j is a variable of type int-pointer
    => j = &i       => The address of i is stored in j.

    ALSO,
    => char *ch_ptr     => pointer to char
    => float *ch_ptr    => pointer to float. 
*/
#include<stdio.h>

int main()
{
    int i = 47;
    int *j = &i;// j will now store the address of i.
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);    // value of pointer
    printf("The address of i is %d\n",&i);  // address of integer   
    printf("The address of i is %u\n",j);   // address stored as a int-type pointer
    printf("The address of j is %u\n",&j);  // address of pointer
    printf("The value of j is %u\n",*(&j)); // value at address of a pointer
    return 0;
}