#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int res = a;

    for(int i = 0 ; i < b; i++){
        res += b;
        cout << res << endl;
    }
    return 0;
}