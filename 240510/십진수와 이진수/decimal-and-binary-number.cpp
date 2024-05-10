#include <iostream>
#include <vector>

using namespace std;

vector<int> sol(vector<int> bin){
    vector<int> res;

    res = bin;

    // res.resize(bin.size());
    
    // copy(bin.begin(), bin.end(), res.begin());

    for(int i = 0; i < 16; i++) 
    {

        for(int i = 0; i < bin.size(); i++) 
        {
            res[i] = res[i] + bin[i];
        }

        for(int i = 0; i < res.size()-1; i++) 
        {
            if(res[i] > 1) 
            {
                res[i] -= 2;
                res[i+1] += 1;
            }
        }

        int res_len = res.size();

        if(res[res_len-1] > 1) 
        {
            res[res_len-1] -= 2;
            res.push_back(1);
        }
    }

    return res;
}

int main() {
    string bin;

    cin >> bin;

    vector<int> v1;

    for(int i = bin.length()-1; i >= 0; i-=1) // 이진수 반전
    { 
        v1.push_back(bin[i] - '0');
    }

    vector<int> v2 = sol(v1);

    for(int i = v2.size()-1; i >= 0; i-=1)  // 반전된 값 출력
    {
        cout << v2[i];
    }

    return 0;
}