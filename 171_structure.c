//structure in c language
#include<stdio.h>
struct pen
{
  char name[12];
  int price;
  float rating;
};
void main()
{
  struct pen p1,p2,p3;
  printf("size of p1 = %d \n",sizeof(p1));
}