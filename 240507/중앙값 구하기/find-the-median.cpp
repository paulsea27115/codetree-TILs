#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c;
    vector<int> v;
    cin >> a >> b >> c;

    v.emplace_back(a);
    v.emplace_back(b);
    v.emplace_back(c);

    sort(v.begin(), v.end());

    cout << v[1];
    return 0;
}