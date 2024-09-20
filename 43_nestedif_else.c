#include <stdio.h>
void main()
{
    int age, num;
    printf("enter your age :");
    scanf("%d", &age); // 15
    if (age >= 18)
    {
        printf("welcome to my clube : \n");
        printf("1. pasta = 120\n");
        printf("2. noodles = 100\n");
        printf("3. sandwitch = 150\n");
        printf("please enter number for order : ");
        scanf("%d", &num);
        if (num == 1)
        {
            printf("your pasta is ordered please pay 120 rs");
        }
        else if (num == 2)
        {
            printf("your noodles is ordered please pay 100 rs");
        }
        else if (num == 3)
        {
            printf("your sandwitch is ordered please pay 150 rs");
        }
        else
        {
            printf("you enter wrong number ");
        }
    }
    else
    {
        printf("try after %d year", 18 - age);
    }
}