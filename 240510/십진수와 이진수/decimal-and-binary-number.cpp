#include <iostream>
#include <vector>

using namespace std;

vector<int> action(vector<int> bin1, vector<int> bin2){
    for(int i = 0; i < bin2.size(); i++) 
    {
        bin1[i] = bin1[i] + bin2[i];
    }

    for(int i = 0; i < bin1.size()-1; i++) 
    {
        if(bin1[i] > 1) 
        {
            bin1[i] -= 2;
            bin1[i+1] += 1;
        }
    }

    int res_len = bin1.size();

    if(bin1[res_len-1] > 1) 
    {
        bin1[res_len-1] -= 2;
        bin1.push_back(1);
    }
    return bin1;
}

vector<int> sol(vector<int> bin){
    vector<int> res;

    res = bin;

    for(int i = 0; i < 16; i++) 
    {
        res = action(res, bin);
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