#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age to find you are drive or not... \n");
    scanf("%d", &age);

    if (age > 18 && age <= 40)
    {
        printf("You are accepted to Drive now You can drive.");
    }
    else if (age > 14 && age < 18)
    {
        printf("You can not access to drive.");
    }
    else
    {
               printf("Do What ever You Want.");
    }
    
    return 0;
}