#include <iostream>

using namespace std;

int main() {
    int a = 13;
    double b = 0.165;

    double res = a * b;

    cout << fixed;
    cout.precision(6);
    cout << a << " * " << b << " = " << res;

    return 0;
}