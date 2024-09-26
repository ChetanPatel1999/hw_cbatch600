#include<stdio.h>
#include<stdlib.h>
void main()
{
 int num=132;
 printf("programm to check odd even ... \n");
 if(num%2==0)
 {
    goto ev;
 }
 else{
    goto od;
 }
 ev:
 printf("even number\n");
 exit(0);
 od:
 printf("odd number\n");
}