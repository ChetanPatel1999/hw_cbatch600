// pointer:-pointer is a special type variable. because its store address of another variable.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr; // pointer declaration
    ptr = &a;
    printf("value of a : %d\n", a);            // 12
    printf("address of a : %d\n", &a);         // 123456
    printf("address of a by ptr : %d\n", ptr); // 123456
    printf("value of a by ptr : %d\n", *ptr);  // 12
    printf("address of ptr : %d\n", &ptr);  //567890
}