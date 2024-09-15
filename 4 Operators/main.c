#include <stdio.h>
int main()
{
    // 4 Types of operators
    // 1 - Arithmatic Operators
    // 2 - Relational Operator / Comparison Operator
    // 3 - Logical Operator
    // 4 - Assignment Operator

    // 1 - Arithmatic Operators

    // int a = 10, b = 20;
    // printf("the sum of a and b is %d \n", a +b);
    // printf("the Substraction of a and b is %d \n", a - b);
    // printf("the Multiplication of a and b is %d \n", a * b);
    // printf("the Division of a and b is %d \n", a / b);
    // printf("the Remainder or Moduler of a and b is %d \n", a % b);



    // 2 - Relational / Comparison Operators

    // int a = 10, b = 20;
    // printf("is a and b equal %d \n", a == b);
    // printf("is a grather than b %d \n", a > b);
    // printf("is a less than b %d \n", a < b);
    // printf("is a greater than or equal to b %d \n", a >= b);
    // printf("is a less than or equal to b %d \n", a <= b);



    // 3 - Logical Operator
    
    int a = 10, b = 20;
    printf("Logical and operator %d \n", a && b);
    printf("Logical or operator %d \n", a || b);
    printf("Logical not operator %d \n", !b);



    // 4 - Assignment Operator

    int a = 10;
    // int c = a+=b;
    printf("b assign to the a and adding  %d \n", a+=45);
    
    return 0;
}