#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<int> v;
    int i;
    int k;
    cin >> i;
    for (int j = 0; j < i; j++) {
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
}
