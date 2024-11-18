#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i;
    vector<int> v;
    vector<int> j;
    for(int k = 0; k < 10; k++) {
        cin >> i;
        v.push_back(i);
    }
    for(int k = 0; k < 10; k++) {
        if(find(j.begin(), j.end(), v[k] % 42) == j.end()) {
            j.push_back(v[k] % 42);
        }
    }

    cout << j.size() << "\n";
}