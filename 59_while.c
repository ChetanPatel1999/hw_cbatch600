// wap to count digit in  given number.
// 67656 = 5
#include <stdio.h>
void main()
{
    int num, c=0; 
    printf("enter a num : ");
    scanf("%d", &num); // 5634
    while (num > 0)    // 5634>0
    {
        c++; //c+=1 // c=c+1  //
        num = num / 10; // 0
    }
    printf("digit  count in given number  : %d", c); // 4
}