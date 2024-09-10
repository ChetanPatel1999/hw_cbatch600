// variable size in byte  and range 
#include<stdio.h>
void main()
{
	char ch;
    short int a;
    int b;
    float f;
    double d;  // to store decimal value 
    long long int lli;
	printf("byte for char = %d byte \n",sizeof(ch));
	printf("byte for char = %d byte \n",sizeof(char));
	printf("byte for short int = %d byte \n",sizeof(a));
	printf("byte for int = %d byte \n",sizeof(b));
	printf("byte for float = %d byte \n",sizeof(float));
	printf("byte for double = %d byte \n",sizeof(d));
	printf("byte for long long int = %d byte \n",sizeof(lli));
	
	unsigned short int val=65537;
	
	printf("\n\n\nvale of val = %d",val);
	
	
}
