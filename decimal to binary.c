#include <stdio.h>

int main()
{
    int n, r;
    int binary[32];
    int i = 0;
    scanf("%d", &n);
    if (n == 0) {
        return 0;
    }

    while (n > 0) {
        r = n % 2;
        binary[i] = r;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
 

    return 0;
}
