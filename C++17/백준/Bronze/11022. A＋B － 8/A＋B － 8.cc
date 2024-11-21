#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int T, A, B;
    cin >> T;
    while (T--) {
        cin >> A >> B;
        v.push_back(A);
        v.push_back(B);
    }
    for (int i = 0; i < v.size(); i += 2) {
        cout << "Case #"<< i / 2 + 1 << ": " << v[i] << " + " << v[i + 1] << " = " << v[i] + v[i + 1] << "\n";
    }

}