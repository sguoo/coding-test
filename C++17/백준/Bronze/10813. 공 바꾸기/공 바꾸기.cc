#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j, n, m;
    vector<int> v;
    cin >> n >> m;
    for(int k = 0; k < n; k++) {
        v.push_back(k+1);
    }
    for(int k = 0; k < m; k++) {
        cin >> i >> j;
        swap(v[i-1], v[j-1]);
    }

    for(int k = 0; k < n; k++) {
        cout << v[k] << " ";
    }


}