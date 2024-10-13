//structure in c language
#include<stdio.h>
#include<string.h>
struct pen
{
  char name[12];
  int price;
  float rating;
};
void main()
{
  struct pen p1,p2,p3;
  printf("enter p1 info : \n");
  printf("enter pen name : ");
  scanf("%s",p1.name);
  printf("enter pen price : ");
  scanf("%d",&p1.price);
  printf("enter pen rating : ");
  scanf("%f",&p1.rating);

  printf("enter p2 info : \n");
  printf("enter pen name : ");
  scanf("%s",p2.name);
  printf("enter pen price : ");
  scanf("%d",&p2.price);
  printf("enter pen rating : ");
  scanf("%f",&p2.rating);


  printf("p1 info :\n");
  printf("name of pen : %s\n",p1.name);
  printf("price of pen : %d\n",p1.price);
  printf("rating of pen : %.2f\n",p1.rating);
  printf("\n");
  printf("p2 info :\n");
  printf("name of pen : %s\n",p2.name);
  printf("price of pen : %d\n",p2.price);
  printf("rating of pen : %.2f\n",p2.rating);
}