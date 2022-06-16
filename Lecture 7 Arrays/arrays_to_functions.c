#include<stdio.h>

// void printarray(int *ptr, int size){
//     for (int i = 0; i < size; i++)
//     {
//         printf("The value of element %d of the array is: %d\n",i+1,(*ptr+i));
//     }
// }

// ----------------------------------------------------------------------------------------------------
// ---------------------------------------OR-----------------------------------------------------------
void printarray(int ptr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("The value of element %d in the array is: %d\n",i+1,ptr[i]);
    }
    ptr[6]=9999;
    
}


int main()
{
    int arr[] = {7,88,65,92,83,75,44};
    printarray(arr,7);
    printf("%d\n",arr[6]);
    return 0;
}    
