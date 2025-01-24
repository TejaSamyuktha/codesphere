include <stdio.h>

void funcA(int n);
void funcB(int n);

void functionA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funcB(n - 1);
    }
}

void funcB(int n) {
    if (n > 0) {
        printf("%d ", n);
        funcA(n - 1);
    }
}

int main() {
    int n = 5;
    funcA(n);
    return 0;
}
