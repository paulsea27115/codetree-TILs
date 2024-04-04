#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int sum = a + b + c, avg = sum / 3;

    cout << sum << endl << avg << endl << sum - avg;
    return 0;
}