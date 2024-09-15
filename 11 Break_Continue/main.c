#include <stdio.h>
int main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 4)
    //     {
    //        printf("Now iam out and whole programme is Out.");
    //        break;
    //     }
        
    //     printf("C tutorial %d \n", i);
    // }
    

    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
           printf("Now iam out but programme is Running tell the end. \n");
           continue;
        }
        
        printf("C tutorial %d \n", i);
    }
    return 0;
}