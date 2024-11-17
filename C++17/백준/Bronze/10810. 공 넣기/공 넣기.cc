#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j, p, q, o;
    vector<int> v;
    cin >> i >> j;
    v.assign(i, 0);
    for(int k = 0; k < j; k++) {
        cin >> p >> q >> o;
        for(int l = p; l <= q; l++) {
            v[l-1] = o;
        }
    }

    for(int k = 0; k < i; k++) {
        cout << v[k] << " ";
    }
}