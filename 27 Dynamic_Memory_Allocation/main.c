#include <stdio.h>

/*
  WHAT AND WHY DYNAMIC MEMORY ALLOCATION
   1 - an statically allocated variables or array has a fixed size in memory
   2 - we have learnt to create big enough array to fit in our inputs but this doesn't seem like an optimal way to allocate memory
   3 - memory is a very useful resource
   4 - clearly we need a way to request memory on runtime
   5 - Dynamic memory allocation is a way in which the size of a data structure can be changed during the runtime
*/

/*
  STATIC MEMORY ALLOCATION
  1 - allocation is done before the program execution
  2 - there is no memory reusability and the memory allocated cannot be freed
  3 - less efficient
*/

/*
  DYNAMIC MEMORY ALLOCATION
  1 - allocation is done during the program execution
  2 - there is memory reusability and the allocated memory can be freed when not required
  3 - More efficient
*/

/*
   MEMORY ALLOCATION IN C PROGRAM
    * - memory assigned to a program in a typical architecture can be broken down into four segments:
     1 - Code
     2 - static/ global Variables
     3 - Stack
     4 - Heap
*/

/*
   C PROGRAM: Stack Overflow
     1 - compilar allocates some space for the stack part of the memory
     2 - when this space gets exhausted for some bad reason, the situation is called as stack overflow
     3 - typical example includes recursion with wrong/no base condition
*/

/*
   C PROGRAM: Use The Heap
     1 - there are a lot of limitation s of stack (static memory allocation)
     2 - some of the examples includes variables sized array, freeing memory no longer required etc.
     3 - Heap can be used flexibly by the programmer as per his needs
*/

int main()
{
    
    return 0;
}