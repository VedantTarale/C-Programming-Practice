#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("fgetcdemo.txt","r");
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    printf("The character is: %c\n",fgetc(file));
    fclose(file);
    file = fopen("fputcdemo.txt","w");
    fputc('m',file);
    fputc('o',file);
    fputc('n',file);
    fputc('e',file);
    fputc('y',file);
    return 0;
}