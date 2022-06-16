/*Create a 2d vactor using structures.*/
#include<stdio.h>
typedef struct vector
{
    float x;
    float y;
}vec;

int main()
{
    vec v1;
    printf("Enter the magnitude of x-component: ");
    scanf("%f",&v1.x);
    printf("Enter the magnitude of y-component: ");
    scanf("%f",&v1.y);
    printf("The vactor is %.2fi + %.2fj",v1.x,v1.y);
    return 0;
}