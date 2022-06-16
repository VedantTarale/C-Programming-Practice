// WHAT WILL THE FOLLOWING LINE PRODUCE IN A C PROGRAM
// printf("%d %d %d\n",a,++a,a++);

// ANS: LET a=5 then the answer is 5 , 6 , 5;
#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("%d %d %d\n",a,++a,a++);// arguments are passed right to left.//
    return 0;
}