
#include <stdio.h>

int main()
{
    //temporary variable
    int a=5,b=10;
    int temp=a;
    a=b;
    b=temp;
     //circumflex
    a=a^b;
    b=a^b;
    a=a^b;
    //substitution
    a=a+b;
    b=a-b;
    a=a-b;
    //substitution using *,/
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d %d",a,b);
    
    
   

    return 0;
}
