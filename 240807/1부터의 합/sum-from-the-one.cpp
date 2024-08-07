#include <iostream>
using namespace std;

int main() {
    int a, i = 0, res = 0;
    cin >> a;

    while(true) {
        res += ++i;

        if(res >= a) {
            break;
        }
    }

    cout << i;
    return 0;
}