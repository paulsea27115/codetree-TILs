#include <iostream>
using namespace std;

int main() {
    int a, i = 0;
    cin >> a;

    while(true) {
        a /= ++i;
        if(a <= 1) {
            break;
        }
    }

    cout << i;

    return 0;
}