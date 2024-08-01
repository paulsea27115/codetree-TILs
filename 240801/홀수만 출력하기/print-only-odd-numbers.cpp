#include <iostream>
#include <vector>
using namespace std;

int main() {
    int Count;
    vector<int> res;

    cin >> Count;

    for(int i = 0; i < Count; i++) {
        int n;
        cin >> n;

        if(n % 3 == 0) {
            res.push_back(n);
        }
    }

    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }

    return 0;
}