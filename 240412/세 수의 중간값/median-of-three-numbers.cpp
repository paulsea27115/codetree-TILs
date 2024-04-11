#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (b - a > 0 && b - c < 0 ? 1 : 0);
    return 0;
}