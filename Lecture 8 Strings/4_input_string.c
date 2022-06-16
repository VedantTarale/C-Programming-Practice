#include<stdio.h>

int main()
{
    char name[34];
    printf("Enter your name: ");
    scanf("%s", name); // scanf("%s", &name[0]); -------------> Both are the same.
    // scanf automatically adds the null character when enter key is pressed.
    printf("Your name is: %s", name);
    printf("%d",sizeof(int));
    //NOTE: to read in a sentense i.e, before a newline(or Enter keypress) use scnaf(%[^\n]%*c,string_name);
    return 0;
}