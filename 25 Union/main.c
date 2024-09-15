#include <stdio.h>
#include <string.h>

/*
  WHAT IS UNION ?
   1 - Union is a user defined data type similar to sturcture
   2 - the difference between structure and unions lies in the fact in STRUCTURE, each member has it's own
   storage location, whereas members of a UNION uses a single shared memory location.
   3 - this single shared memory location is equal to the size of it's largest data member
*/

union Student
{
    int id; // 4 bytes
    char name[30]; // 1 bytes
    int marks; // 4 bytes
};

int main()
{
    union Student s1;
    strcpy(s1.name, "union use in c programme");
    s1.marks = 76;
    s1.id = 1;

    printf("id value is %d \n", s1.id);
    printf("marks value is %d \n", s1.marks);
    printf("name value is %s \n", s1.name);
    return 0;
}