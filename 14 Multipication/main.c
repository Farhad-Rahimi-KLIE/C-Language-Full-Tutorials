#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number you want to Multiplay... \n");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, number, i*number);
    }
    
    return 0;
}