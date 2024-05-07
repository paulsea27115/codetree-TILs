#include <iostream>
#include <string>

using namespace std;

string solve(int num1, int num2){
    if(num1 <= 0) return "0";
    string res = "";

    for(int i = 0; i < num2 ; i++){
        res += to_string(num1);
    }

    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    string res = solve(a,b);
    cout << res;

    return 0;
}