#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i;
    vector<int> v;
    vector<int> j;
    for(int k = 0; k < 28; k++) {
        cin >> i;
        v.push_back(i);
    }
    for(int k = 1; k <= 30; k++) {
        auto qwe= find(v.begin(), v.end(), k);
        if(qwe == v.end()) {
            j.push_back(k);
        }
    }
    sort(j.begin(), j.end());
    for(int k = 0; k < 2 ; k++) {
        cout << j[k] << "\n";
    }
}