#include <stdio.h>
#include <string.h> // import string libraay to use string functions

/*
  STRING FUNCTIONS

  1 - strcat() --> Concatenate a to String
  2 - strlen() --> Show String Length
  3 - strrev() --> Reverse the String
  4 - strcpy() --> Copy one String to Another
*/

int main()
{
    char s1[] = "farhad";
    char s2[] = "Rahimi Klie";
    char s3[30];

    // puts(strcat(s1,s2));
    // printf("the length of a string is %d", strlen(s1));
    // puts(strrev(s1));
    strcpy(s3, strcat(s1, s2));
    puts(s3);
    printf("S3 is %s\n ", s3);
    return 0;
}