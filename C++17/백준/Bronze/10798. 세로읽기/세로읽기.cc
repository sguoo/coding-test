#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v(5);
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    int max_len = 0;
    for(int i = 0; i < 5; i++) {
        if(v[i].size() > max_len) {
            max_len = v[i].size();
        }
    }


    for (int i = 0; i < max_len; i++) {
        for (int j = 0; j < 5; j++) {
            if(i < v[j].size()) {
                cout << v[j][i];    
            }
        }
    }
}