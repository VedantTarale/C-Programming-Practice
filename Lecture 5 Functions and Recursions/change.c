#include<stdio.h>
int change (int c);
int main()
{
    int b = 344;
    printf("The original value of b is %d\n", b);
    change(b); //MISNOMER
    printf("The final value of b is %d\n",b);
    return 0;
}
int change(int a){
    a=77;
}