#include <stdio.h>

/*
  WHY AND HOW TO PASS ARRAYS ?
  1 - we pass array to a function when we need to pass a list of values to a given function.
  2 - we can pass the array to a function :
    1 - By declaring array as a parameter in the function
    2 - By declaring a pointer in the function to hold the base address of the array
*/

/*
  ARRAY ARE PASSED TO FUNCTION THROUGH BASE ADDRESS
  arr[0] ------>  1000 <-------- arr
  arr[1] ------>  1002 <-------- arr + 1
  arr[2] ------>  1004 <-------- arr + 2
  arr[3] ------>  1006 <-------- arr + 3
  arr[4] ------>  1008 <-------- arr + 4
  arr[5] ------>  100A <-------- arr + 5
*/

/*
  1 - inside function if you change the value of the array it gets reflacted in the main function
  2 - if parameter change argument well be chaged.
*/

// By declaring array as a parameter in the function

int func1(int array []){
    for (int i = 0; i < 5; i++)
    {
        printf("value at index %d is %d \n", i, array[i]);
    }
    array[0] = 999; // this change argument well be changed
    
}



// By declaring a pointer in the function to hold the base address of the array

void func2(int* ptr){
    for (int i = 0; i < 5; i++)
    {
        printf("value at index %d is %d \n", i, ptr[i]); // this well be ok *(ptr+1)
    }
    *(ptr+2) = 234;
}

int main()
{
    // By declaring array as a parameter in the function

    // int arr[] = {23,13,3,4,7};
    // printf(" before value of arr index zero id %d \n", arr[0]);
    // func1(arr);
    // printf(" after value of arr index zero id %d \n", arr[0]);


    // By declaring a pointer in the function to hold the base address of the array

    int arr[] = {23,13,3,4,7};
    func2(arr);
    return 0;
}