#include <stdio.h>

// function are used to divide a large c programme into smaller pieces

// types of function
// 1 - library function -> functions included in c header files
// 2 - User Defined function -> Functions created by c programmer to reduce complexity of a programme

int sum(int a, int b){  // Formal parameter 
    return a + b;
}

int main()
{
    int a, b, c;

    a = 20;
    b = 50;
    c = sum(a,b); // Actual Argument
    printf("The sum of a and b is %d \n", c);
    return 0;
}