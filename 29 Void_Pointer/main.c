#include <stdio.h>

/*
  WHAT IS A VOID POINTER ?
   1 - a void pointer is a pointer that has no data type associated with it.
   2 - a void pointe can be easily typecasted to any pointer type.
   3 - in simple language it is a general purpose pointer variables.
*/

/*
  USES OF VOID POINTER
   1 - in dynamic memory allocation, malloc() and calloc() return (void *) type pointer.
   2 - this allows these dynmic memory functions to be used to allocate memory of any data type. this is because these pointers can be typecasted to any pointer type
*/

/*
  MORE ON VOID POINTER
   1 - it is not possible to dereference void pointers.
   2 - pointer arithmatic is not allowed in C standards with void pointers.
   3 - Hence it is not recommended to use pointer arithmatic with void pointers.
*/

int main()
{
    int a = 420;
    float b = 5.67;
    void *ptr;
    ptr = &a;
    printf("The vlaue of a is %d \n", *((int*)ptr));
    return 0;
}