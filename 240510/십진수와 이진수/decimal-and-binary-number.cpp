#include <iostream>
#include <vector>
#include <math.h>

#define ll long long int

using namespace std;


int main() {
    string bin;
    cin >> bin;

    ll gisu = 0;

    ll res = 0;

    for(ll i = bin.length()-1; i >= 0; i--){
        res += bin[i] == '1' ? pow(2, gisu) : 0;
        gisu += 1;
    }

    res *= 17;

    // cout << res;

    vector<ll> bin2;

    while(res > 0) {
        bin2.emplace_back(res % 2);
        res /= 2;
    }

    for(ll i = bin2.size()-1; i >= 0; i--){
        cout << bin2[i];
    }

    return 0;
}