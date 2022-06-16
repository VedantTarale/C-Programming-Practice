//WRITE A FUNCTION TO CALCULATE THE FORCE OF ATTRACTION ECERTED BY THE EARTH ON A BODY OF MASS m (g=9.8 m/s^2)
#include<stdio.h>
float force (float mass);
int main()
{
    float mass;
    printf("Enter the mass of the body in kilograms: ");
    scanf("%f",&mass);
    printf("The force exerted by the EARTH on the body is %f Newtons.",force(mass));
    return 0;
}
float force (float mass){
    return mass * 9.8;
}