#include<stdio.h>
int sum(int a , int b);// a and b are parameters

int d,e;
int main()
{
    printf("Enter the 1st number: \n");
    scanf("%d",&d);
    printf("Enter the 2nd number: \n");
    scanf("%d",&e);
    sum(d,e); // d and e are arguments.
    return 0;
}

int sum(int a , int b){
    int c = a + b;
    printf("The sum is %d\n",c);
}