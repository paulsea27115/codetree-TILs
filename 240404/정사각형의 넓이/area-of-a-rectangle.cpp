#include <iostream>

int main() {
    int a;

    scanf("%d", &a);
    
    if(a < 5) printf("tiny");
    else printf("%d", a*a);
    
    return 0;
}