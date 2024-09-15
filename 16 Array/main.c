#include <stdio.h>

// what is Array

//  1 - an array is a collection of data items of the same type
//  2 - items are stored at contiguous memory locations.
//  3 - a one-dimentional array is like a list.
//  3 - a two-dimentional array is like a table.

// Properties of array

//  1 - Data in an array is stored in contiguous memory locations
//  2 - Each element of an array is of same size

int main()
{
    // Array Syntax
    // 1 - data-type name[size];
    // 2 - data-type name[size] = {1,2,3,4,5}; // Size is not Required
    // 3 - data-type name[rows][column]; // for 2D Array
    // 4 - Access the array element  name[0] = 0;

//    ********** Array with declared the size **********
    // int marks[4];
    // marks[0] = 10;
    // marks[1] = 20;
    // marks[2] = 30;
    // marks[3] = 40;
    // printf("the valur of array is %d \n", marks[0]);
    // printf("the valur of array is %d \n", marks[1]);
    // printf("the valur of array is %d \n", marks[2]);
    // printf("the valur of array is %d \n", marks[3]);

//    for (int i = 0; i < 4; i++)
//    {
//     printf("Enter the value you want %d \n", i);
//     scanf("%d", &marks[i]);
//    }
   
//    for (int i = 0; i < 4; i++)
//    {
//     printf("your index is %d and your value is %d \n", i, marks[i]);
//    }


    // ********** Array Declared without size **********
    // int marks[] = {1,2,3,4,5,6,7};
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("the index is %d and value is %d\n ", i, marks[i]);
    // }

    // ********** 2D Array or data-type name[rows][column]; // for 2D Array **********

    // int marks[2][4] = {{1,2,3,4},{5,6,7,8}};

    // for (int i = 0; i < 2; i++)
    // {
    //   for (int j = 0; j < 4; j++)
    // {
    //     printf("the value of row is %d and the value of column is %d and the full output is this %d \n", i, j, marks[i][j]);
    // }   
    // }
    

    
    return 0;
}