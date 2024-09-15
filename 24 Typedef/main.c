#include <stdio.h>
#include <string.h>

/*
  Typedef defination
   1 - You can short your long data type name to small
*/

// Typedef Syntax
// typedef <previous name> <alias name>

// example
// typedef unsigned long ul;

typedef struct Student
{
    int id;
    int marks;
    char name[35];
} std;
 

int main()
{
     std farhad;
    farhad.id = 1;
    farhad.marks = 99;
    strcpy(farhad.name, "farhad Rahimi KLie jan");

     printf("The Farhad id is %d \n", farhad.id);
    printf("The Farhad marks is %d \n", farhad.marks);
    printf("The Farhad name is %s \n", farhad.name);
    return 0;
}