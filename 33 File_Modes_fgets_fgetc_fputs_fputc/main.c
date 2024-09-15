#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file2.txt", "w");
    // fgetc modes
    // char c = fgetc(ptr); // read the character of file content
    // printf("the character i was read %c \n", c);
    //  c = fgetc(ptr);
    // printf("the character i was read %c \n", c);

//   fgets mode
//    char str[4];
//    fgets(str, 3, ptr);
//    printf("the string is %s \n", str);


// fputc mode
 fputc('o', ptr);
 fputs("this is farhad", ptr);



    fclose(ptr);
    return 0;
}