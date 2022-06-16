// Write a recursion to calculate the sum of first n natural numbers.
#include<stdio.h>
int sum(int n);
int main()
{   
    int n;
    printf("To get the sum of n natural numbers enter the value of n: ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d", n, sum(n));
    return 0;
}
int sum(int n){
    int val;
    if (n==1)
    {
        return 1;
    }
    else {        
        val = n + sum(n-1);
    }
    return val;
    
}