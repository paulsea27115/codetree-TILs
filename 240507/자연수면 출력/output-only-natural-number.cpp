#include <iostream>
#include <cmath>

using namespace std;

int solve(int num1, int num2){
    if(num1 <= 0) return 0;
    int res = 0;

    for(int i = num1; i < num1 * pow(10, num2); i*=10) res += i;

    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << solve(a,b);

    return 0;
}