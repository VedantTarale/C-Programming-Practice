/*Write a program to illustrate the use of -> (Arrow operator)*/
#include<stdio.h>
typedef struct vector
{
    float x;
    float y;
}vec;
vec sumVector(vec v1, vec v2){
    vec v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    return v3;
}
int main()
{
    vec v1,v2,v3;
    vec *addv3;
    addv3 = &v3;
    printf("Enter the magnitude of x-component for the firsr vector: ");
    scanf("%f",&v1.x);
    printf("Enter the magnitude of y-component for the firsr vector: ");
    scanf("%f",&v1.y);
    printf("Enter the magnitude of x-component for the second vector: ");
    scanf("%f",&v2.x);
    printf("Enter the magnitude of y-component for the second vector: ");
    scanf("%f",&v2.y);
    v3 = sumVector(v1,v2); 
    printf("The sum of the vectors is %.2fi + %.2fj\n",v3.x,v3.y);
    printf("The sum of the vectors is %.2fi + %.2fj",(*addv3).x,(*addv3).y);
    return 0;
}