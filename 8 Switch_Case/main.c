#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age to find you are drive or not... \n");
    scanf("%d", &age);

    switch (age)
    {
    case 18:
        printf("You are accepted to Drive now You can drive.");
        break;
    case 20:
        printf("You can not access to drive.");
        break;

    default:
        printf("Do What ever You Want.");
        break;
    }
    return 0;
}