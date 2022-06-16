#include <stdio.h>
// in C language any NON-ZERO value is considered TRUE.
// ==   equality
// >=   greather than equal to
// <=   less than equal to
// !=   not equal to
// >    greater than
// <    less than

int main()
{
    int age;
    int a = 0;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("Your age is above or equal to 90 years. You cannot drive.");
        a = 1;
    }
    if (!a)

    {
        if (age < 18)
        {
            printf("You are underage for driving.");
        }

        else
        {
            printf("You can drive.");
        }
    }
    return 0;
}