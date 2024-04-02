#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    
    int res = a + b + c;
    
    a = res;
    b = res;
    c = res;
    
    printf("%d %d %d",a,b,c);
    return 0;
}