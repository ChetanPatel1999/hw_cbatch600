// structure in c language
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter p%d info : \n", i + 1);
        printf("enter pen name : ");
        scanf("%s", p[i].name);
        printf("enter pen price : ");
        scanf("%d", &p[i].price);
        printf("enter pen rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("p%d info :\n", i + 1);
        printf("name of pen : %s\n", p[i].name);
        printf("price of pen : %d\n", p[i].price);
        printf("rating of pen : %.2f\n", p[i].rating);
        printf("\n");
    }
}