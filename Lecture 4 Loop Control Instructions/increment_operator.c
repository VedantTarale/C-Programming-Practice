#include<stdio.h>

int main()
{
    int i =5;
    printf("The value afte i++ is %d\n", i++);
    printf("The value of i is %d\n\n", i);
    // the result of the program is 5 and 6. WHICH IS OPPOSED TO THE EXPECTED ANSWER OF 6 AND 6.
    // THIS IS BECAUSE i++ -----> FIRST PRINT THEN INCREMENT.
    //                 ++i -----. FIRST INCREMENT THEN PRINT. 
    
    
    int a=5;
    printf("The value after ++a is %d\n", ++a);
    printf("The value of a is %d\n\n",a);

    // += is compound assignment opeartor.
    // -= *= /= and %= are also compound assignment opearators.

    int b = 0;
    while(b<100){
    b+=10;// ----> INCREMENT B BY 10
    printf("The Value of b is: %d\n\n",b);
    }
    
    int c = 100;
    while(c>10){
    c-=10;// ----> DECREMENTS C BY 10
    printf("The Value of c is: %d\n\n",c);
    }
    
    int d = 1;
    while(d<1024){
    d*=2;// ----> INCREMENTS D BY A FACTOR OF 2
    printf("The Value of d is: %d\n\n",d);
    }

    int e = 1024;
    while(e<=1024 && e>=1){
    printf("The Value of e is: %d\n\n",e);
    e/=2;// ----> DECREMENTS E BY A FACTOR OF 2
    }
    
    return 0;
}