#include <stdio.h>

int main()
{
    int n, r;
    int octa[32];
    int i = 0;
    scanf("%d", &n);
    if (n == 0) {
        return 0;
    }

    while (n > 0) {
       octa[i]=n % 8;
        
        n=n/8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octa[j]);
    }
 

    return 0;
}
