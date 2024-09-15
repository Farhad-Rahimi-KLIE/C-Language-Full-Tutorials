#include <stdio.h>

/*
 IS STRING IS A DATA TYPE IN C ?
 1 - No string not a data type in c language
 2 - We express strings using an array of characters terminated by a null character ("\0")
*/

/*
 WHAT IS STRING ?
 1 - String array of characters terminated by NULL characters
 2 - string in c is created by creating an array of characters
*/

/*
 CREATING STRING IN C
 1 - char name[] = "farhad rahimi klie" in this way we don't need to ("\0") to terminated the string
 2 - char name[] = {'f','a','r','h','a','d'}; in this way we need to terminated the string using ("\0")
*/


int main()
{
    // char str[] = {'f','a','r','h','a','d','\0'};
    // char str[] = "farhadRahimi Klie";
    // printf("%s", str);

    char str[24];
    gets(str); // get input from user
    printf("Using printf %s \n", str);
    puts(str); //Show gets result
    return 0;
}