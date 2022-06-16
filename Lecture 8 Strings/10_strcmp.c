#include<stdio.h>
#include<string.h>
// strcmp() function is used to compare two strings.
// It returns 0 if both the strings are equal
// It returns -1 if first string's mismatched character's ASCII value is not greater than second string's corresponding mismatched character.
// It returns +1 otherwise.
int main()
{
    char str[45] = "Hello";
    char str1[3] = "Hey";
    printf("%d",strcmp(str,str1));
    return 0;
}