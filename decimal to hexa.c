#include <stdio.h>

int main()
{
    int n, r;
    int hex[32];
    int i = 0;
    scanf("%d", &n);
    if (n == 0) {
        return 0;
    }

    while (n > 0) {
        r = n % 16;
        if(r<10){
            hex[i]=r+'0';
        }
        else{
            hex[i]=r-10+'A';//5+'A'==F
            
        }
        n=n/16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
 

    return 0;
}
