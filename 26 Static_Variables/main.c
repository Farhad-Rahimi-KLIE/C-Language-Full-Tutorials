#include <stdio.h>

/*
    LOCAL VARIABLES
     1 - variables which are accessed inside a fucntion or a block are called local variables
     2 - they can only be accessed by the fucntion they are declared in
     3 - they are inaccessible to the function outside the function the function they are declared in  
*/

/*
    GLOBAL VARIABLES
     1 - these are the variables defined outside the main method.
     2 - global variables are accessible throughout the entire program from any function 
     3 - if a local and global variables has the same name, the local variables will take preference 
*/

/*
    STATIC VARIABLES
     1 - static variables are variables which have a property of preserving their values even when they go out of scope.
     2 - they preserve their valur from the previous scope and are not initialized again.
     3 - static variables remains in memory throughout the span of the program
     4 - static variables are initialized to 0 if not initialized explicity
*/

int b = 34;
int func1(int b1){
    static int myvar = 0;
    printf("the value of myvar is %d \n", myvar);
    myvar++;
    return b1 = myvar;
}

int main()
{
    int b = 245;

    int val = func1(b);
        val = func1(b);
        val = func1(b);
        val = func1(b);
        val = func1(b);
    int* ptr = &val;
    return 0;
}