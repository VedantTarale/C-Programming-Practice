//WRITE A RECURSION TO CALCULATE THE nth ELEMENT OF THE FIBONACHI SEQUENCE.
#include<stdio.h>
int element(int n);
int main()
{
    int n;
    printf("Enter the value of n if the 'nth' element is desired: ");
    scanf("%d",&n);
    printf("The element at the %d posttion in the fobonachi series is %d",n,element(n));
    return 0;
}
int element(int n){
   int val;
    if (n==0)
    {
        return 0;
    }
    
    else if (n==1)
    {
        return 1;
    }
    else if (n==2)
    {
       return 1;
    }
    else{
        val = element(n-1) + element (n-2);
    }
    return val;
     
}