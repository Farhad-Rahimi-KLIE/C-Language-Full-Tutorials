#include <stdio.h>

int factorial(int number){
    // base case
    if (number == 0 || number == 1)
    {
        return 1;
    }else{
        // Recursive case
        return number * factorial(number - 1);
    }
    
   }

int main()
{
    /*
       Recursion have a 2 main Case ->
       1 - The case at which the function doesn't Recur is called the Base Case.
       2 - the instance where the function keeps calling it self to Perform a subtaskis called Recurseve case.
    */

   int number;
   printf("Enter your Number to convert to the Factorial... \n");
   scanf("%d", &number);
   printf("Your Number %d and Your Factorial Number is %d \n", number, factorial(number));

    return 0;
}