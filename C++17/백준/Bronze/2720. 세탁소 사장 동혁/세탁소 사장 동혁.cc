#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    vector<int>change(T);
    vector<vector<int>> matrix(T, vector<int>(4, 0));
    for (int i = 0; i < T; i++) {
        cin >> change[i];
        while(change[i] > 0) {
            if (change[i] >= 25) {
                change[i] -= 25;
                matrix[i][0]++;
            } else if (change[i] >= 10) {
                change[i] -= 10;
                matrix[i][1]++;
            } else if (change[i] >= 5) {
                change[i] -= 5;
                matrix[i][2]++;
            } else if (change[i] >= 1) {
                change[i] -= 1;
                matrix[i][3]++;
            }
        }
    }
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
