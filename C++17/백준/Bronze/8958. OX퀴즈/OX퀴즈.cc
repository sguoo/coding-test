#include <bits/stdc++.h>

using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;

        int score = 0;
        int streak = 0;

        for (char c : str) {
            if (c == 'O') {
                streak++;
                score += streak;
            } else {
                streak = 0;
            }
        }

        cout << score << '\n';
    }

    return 0;
}