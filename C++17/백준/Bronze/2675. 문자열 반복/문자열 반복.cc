#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T, R, count;
    string S;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> R >> S;
        for (int j = 0; j < S.length(); j++) {
            for (int k = 0; k < R; k++) {
                cout << S[j];
            }
        }
        cout << "\n";
    }

}