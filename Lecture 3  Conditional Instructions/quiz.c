//WRITE A PROGRAM TO FIND THE GRADE OF A STUDENT BASED ON MARKS.

#include<stdio.h>

int main()
{
    // int marks;
    // printf("Enter your marks:");
    // scanf("%d",&marks);
    // if (marks<100 && marks>=90)     
    // {
    //     printf("Your grade is A");
    // }
    // else if (marks<90 && marks>=80)     
    // {
    //     printf("Your grade is B");
    // }
    // else if (marks<80 && marks>=70)     
    // {
    //     printf("Your grade is C");
    // }
    // else if (marks<70 && marks>=60)     
    // {
    //     printf("Your grade is D");
    // }
    // else if (marks<60 && marks>=0)    
    // {
    //     printf("Your grade is F");
    // }
    // else
    // {
    //     printf("INVALID");
    // }
    
    //ALTERNATE:
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    (marks<100 && marks>=90)? printf("Your grade is A"):(marks<90 && marks>=80)?printf("Your grade is B"):(marks<80 && marks>=70)?printf("Your grade is C"):(marks<70 && marks>=60)?printf("Your grade is D"):(marks<60 && marks>=0)?printf("Your grade is F"):printf("INVALID");
    return 0;
}