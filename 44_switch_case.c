// wap to display day name according two number.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    switch(num)
    {
        case 1:printf("monday");break;
        case 2:printf("tuesday");break;
        case 3:printf("wednusday");break;
        case 4:printf("thursday");break;
        case 5:printf("friday");break;
        case 6:printf("saturday");break;
        case 7:printf("sunday");break;
        default :printf("please enter 1 to 7..");
    }
}