#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    string bin;
    cin >> bin;

    int gisu = 0;

    int res = 0;

    for(int i = bin.length()-1; i >= 0; i--){
        res += bin[i] == '1' ? pow(2, gisu) : 0;
        gisu += 1;
    }

    res *= 17;

    // cout << res;

    vector<int> bin2;

    while(res > 0) {
        bin2.emplace_back(res % 2);
        res /= 2;
    }

    for(int i = bin2.size()-1; i >= 0; i--){
        cout << bin2[i];
    }

    return 0;
}