#include <iostream>
using namespace std;

int main() {
    int a, b, res = 0;

    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(i % 6 == 0 && i % 8 != 0) {
            res += i;
        }
    }

    cout << res;

    return 0;
}