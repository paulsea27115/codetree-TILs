#include <bits/stdc++.h>
using namespace std; 

const int box_range = 3;

void print_vector(vector<vector<int>> vv){
    for(int i = 0; i < vv.size(); i++) {
        for(int j = 0; j < vv.size(); j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
}

int sol(vector<vector<int>> vv, pair<int,int> p, int max){

    if(p.first > vv.size() - box_range) {
        return max;
    } else if(p.second > vv.size() - box_range) {
        return sol(vv, make_pair(p.first+1, 0),max);
    }

    int res = 0;

    for(int i = p.first; i < p.first + box_range; i++) {
        for(int j = p.second; j < p.second + box_range; j++) {
            // cout << i << " " << j << endl;
            if(vv[i][j] == 1) {
                res += 1;
            }
        }
    }

    if(res <= max) {
        res = max;
    }

    return sol(vv, make_pair(p.first, p.second+1), res);
    
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> vv;

    for(int i = 0 ; i < N; i++) {
        vector<int> v;
        for(int j = 0; j < N; j++){
            int num;
            cin >> num;

            v.push_back(num);
        }
        vv.emplace_back(v);
    }

    cout << sol(vv, make_pair(0, 0), 0);

    return 0;
}