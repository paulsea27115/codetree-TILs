#include <iostream>

using namespace std;

int main() {
    
    string num;

    cin >> num;

    string mid = num.substr(4,4), end = num.substr(9,4);

    cout << "010-" << end << "-" << mid;
    return 0;
}