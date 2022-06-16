#include<stdio.h>
#include<math.h>
int main()
{
   // operends can be integers, float values
   // arithmatic operators can be + - * / 
   //----------------------------------------------------------------
   // int a =5; int c = 7;
   // int z; z = a+b; ----LEGAL
   // int z; a+b =z; ----ILLEGAL
   //----------------------------------------------------------------

   // %--Modulur division operatior -- gives ramainder -- doesn't work on float -- remainder is of the same sign as that of the numerator
     printf("5 when divided by 2 leaves reamminder %d\n", 5%2);
     printf("-5 when divided by 2 leaves reamminder %d\n", -5%2);
     printf("5 when divided by -2 leaves reamminder %d\n", 5%-2);// remainder is of the sign of the numerator
    // no operator is assumed to be present in black spaces i.e., ab is not the same as a*b

    // There is no operator to perform exponentiation in c language
    // HOWEVER WE CAN USE pow(a,b) FROM <math.h>
    printf("4 raised to the power 5 is %f\n", pow(4,5)); // pow(a,b) returns a value of the type double
    return 0;
}