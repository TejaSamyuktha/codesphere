#include <stdio.h>

int main()
{
    int a=6>>2;
    //6/(pow(2,2))=>6/4=1
    printf("Nibble value of %d\n",a);
    int b=6<<2;
    //6*pow(2,2)
    printf("nibble value of %d",b);
    

    return 0;
}
