#include <bits/stdc++.h>


using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int num;
        cin >> num;
        vector<int> v(num);
        float sum = 0;

        for (int i = 0; i < num; ++i) {
            cin >> v[i];
            sum += v[i];
        }

        float avg = sum / num;
        int count = 0;
        for (int i = 0; i < num; ++i) {
            if (v[i] > avg) count++;
        }

        cout << fixed << setprecision(3) << (float)count / num * 100 << "%" << endl;
    }

    return 0;
}
