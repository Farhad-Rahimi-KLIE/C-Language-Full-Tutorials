#include <stdio.h>
#include <string.h>

/*
  WHAT IS STRUCTURE ?
   1 - Structure are user defined data types in c
   2 - Using structure allows us to combine data of different types together
   3 - it si used to create a complex data type which contains diverse information 
*/

/*
  Accessing STRUCTURE Members
   1 - array element are accessed using the subscript variables
   2 - in a similar fasion, structure members are accessed using dot [.] operator
   3 - ( . ) is called as "structure member operator"
*/

// structure Syntax
struct Student
{
    int id;
    int marks;
    char name[35];
};


int main()
{
    struct Student farhad, shaher;
    farhad.id = 1;
    farhad.marks = 99;
    strcpy(farhad.name, "farhad Rahimi KLie jan");

    shaher.id = 2;
    shaher.marks = 79;
    strcpy(shaher.name, "Shaher Ishan jan");

    printf("The Farhad id is %d \n", farhad.id);
    printf("The Farhad marks is %d \n", farhad.marks);
    printf("The Farhad name is %s \n", farhad.name);

     printf("The Shaher id is %d \n", shaher.id);
    printf("The Shaher marks is %d \n", shaher.marks);
    printf("The Shaher name is %s \n", shaher.name);
    return 0;
}