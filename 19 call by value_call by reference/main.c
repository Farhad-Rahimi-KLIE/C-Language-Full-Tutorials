#include <stdio.h>

// Call By Value

// 1 - when we call a function by value, it means that we are passing the value of the arguments
//     which are copied into the formal parameters of the functions
// 2 - which means that the original values remain unchanged and only the parameters inside the function changed


// Call By Reference

// 1 - the call by reference method of passing argument to a c fucntion copies the address of the
// arguments into the formal parameters
// 2 - addresss of the actual argument are copied and then assigned to the corresponding formal argument


// Call By Value

// int add(int a, int b){
//     return a+b;
// }


// Call By Reference

// void Swap(int* x, int* y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }

int main()
{
    // Call By Value

    // int x = 23;
    // int y = 10;
    // int result = add(x,y);
    // printf("the result of add function is %d", result);


// Call By Reference

//   int a = 34, b = 24;
//   printf("before swap value of a and b is %d   %d \n ", a,b);
//   Swap(&a, &b);
//   printf("after swap value of a and b is %d  %d \n ", a,b);


    return 0;
}