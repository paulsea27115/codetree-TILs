#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for(int i = 1; i <= a; i++) {
        if(i % 2 == 0 && i % 4 != 0) {
            continue;
        }
        
        int check1 = i / 8;
        
        if(check1 % 2 == 0 && check1 != 0) {
            continue;
        }

        int check2 = i % 7;

        if(check2 < 4 || i < 7) {
            continue;
        }

        cout << i << " ";
    }

    return 0;
}