#include<stdio.h>

int main()
{
    int number = 55;
    FILE *file;
    file = fopen("3_writing_to_file.txt","w");
    fprintf(file,"The number is %d",number);    // Writes to the file.
    fclose(file);
    return 0;
}