#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int A, B;
    while (A + B) {
       cin >> A >> B;
        v.push_back(A + B);
    }
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << "\n";
    }

}