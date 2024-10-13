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
  struct pen p1,p2={"goldex",10, 4.5},p3;
  strcpy(p1.name,"cello");
  p1.price=5;
  p1.rating=3.4;

  printf("p1 info :\n");
  printf("name of pen : %s\n",p1.name);
  printf("price of pen : %d\n",p1.price);
  printf("rating of pen : %.2f\n",p1.rating);
  
  
  printf("p2 info :\n");
  printf("name of pen : %s\n",p2.name);
  printf("price of pen : %d\n",p2.price);
  printf("rating of pen : %.2f\n",p2.rating);
}