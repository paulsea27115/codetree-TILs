#include <iostream>

using namespace std;

int main() {
    int a, num;
    cin >> a;

    for(int i = 0; i < 4; i++){
        cin >> num;
        cout << (num >= a ? 0 : 1) << endl;
    }

    return 0;
}