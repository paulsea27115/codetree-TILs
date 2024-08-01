#include <iostream>
using namespace std;

int main() {
    int Count, n;

    cin >> Count;

    for(int i = 0; i < Count; i++) {
        cin >> n;

        if(n % 3 == 0) {
            cout << n << "\n";
        }
    }

    return 0;
}