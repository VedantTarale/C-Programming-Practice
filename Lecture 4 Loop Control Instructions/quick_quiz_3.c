#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of values required:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("The number is %d\n",i);
    }
    
    return 0;
}