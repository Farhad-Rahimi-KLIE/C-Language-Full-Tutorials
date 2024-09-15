#include <stdio.h>
#include <stdlib.h>

/*
  FUNCTION FOR DYNAMIC MEMORY ALLOCATION IN C
   1 - in Dynamic memory allocation, the memory is allocated in runtime from the heap segment
   2 - we have four functions that help us achieve this task:
    1 - Malloc
    2 - Calloc
    3 - Realloc
    4 - Free
*/

int main()
{
    // Malloc

    // int* ptr;
    // int n;
    // printf("Enter the size of array you want to create \n");
    // scanf("%d", &n);

    // ptr = (int*) malloc(n * sizeof(int));  // Malloc Formula
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of %d this array \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    //     for (int i = 0; i < n; i++)
    // {
    //     printf("index is this %d and the value id this %d \n",i, ptr[i]);

    // }




    // Calloc

    int* ptr;
    int n;
    printf("Enter the size of array you want to create \n");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int)); // Calloc Formula
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d this array \n", i);
        scanf("%d", &ptr[i]);
    }
        for (int i = 0; i < n; i++)
    {
        printf("index is this %d and the value id this %d \n",i, ptr[i]);

    }


    // Realloc
    printf("Enter the New size of array you want to create \n");
    scanf("%d", &n);

    ptr = (int*) realloc(ptr, n * sizeof(int)); // Realloc Formula
    for (int i = 0; i < n; i++)
    {
        printf("Enter the New value of %d this array \n", i);
        scanf("%d", &ptr[i]);
    }
        for (int i = 0; i < n; i++)
    {
        printf("New value index is this %d and the new value id this %d \n",i, ptr[i]);

    }

    free(ptr); // Free Formula
    
    return 0;
}