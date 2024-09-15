#include <stdio.h>

// What is Pointers

// 1 - variable which stores the address of a another variable
// 2 - can be of type int, float, char, array, function, etc...
// 3 - Size defind on the Architecture. Ex 2 bytes for 32 bit / 4 byte for 64 bit
// 4 - pointer declared using * asterisk symbol

// & and * Operator

// 1 - The address of operator & returns the address of a variables
// 2 - * is the dereference operator (also called indirection operator) used to get the value
// at a given address

// Uses of pointer

// 1 - Dynamic Memory allocation
// 2 - array, function, and Structure

int main()
{
    // Pointers key values is ->
    // 1 - & return the address of a variables
    // 2 - * Dereference used to get value at given address

    int a = 10;
    int* ptr = &a;
    printf("The value of a is %d \n", *ptr);
    printf("Main address of pointer is %d \n", &ptr);
    printf("Main address of a is %d \n",&a);
    return 0;
}