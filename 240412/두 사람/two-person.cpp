#include <iostream>

using namespace std;

bool solve(int age[], char gender[]){
    for(int i = 0; i < 2; i++) {
        if (gender[i] == 'M' && age[i] >= 19) return true;
    }
    
    return false;
}

int main() {
    int age[2];
    char gender[2];

    for(int i = 0; i < 2; i++) cin >> age[i] >> gender[i];

    if(solve(age, gender)) cout << 1;
    else cout << 0;    

    return 0;
}