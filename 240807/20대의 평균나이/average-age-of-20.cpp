#include <iostream>
using namespace std;

int main() {
    int avg = 0, i = 0;

    while(true) {
        int num;
        cin >> num;

        if(num >= 30 || 19 >= num) {
            break;
        }
        avg += num;
        i++;
    }
    printf("%.2f", (float)avg / (float)i);
    return 0;
}