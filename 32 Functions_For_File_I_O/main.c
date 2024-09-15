#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[35] = "hello world my name is farhad";
    // ****** Reading a File ******
    // ptr = fopen("file.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s \n", string);

    // ****** Writing a File ******
    ptr = fopen("file.txt", "w");
    fprintf(ptr,"%s", string);


        // ****** Append a File ******
    ptr = fopen("file.txt", "a");
    fprintf(ptr,"%s", string);
    return 0;
}