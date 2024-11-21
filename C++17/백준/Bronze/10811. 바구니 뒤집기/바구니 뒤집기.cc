    #include <iostream>
    #include <vector>
    #include <algorithm>

    using namespace std;


    int main() {
        int N, M, i, j;
        vector<int> v;
        cin >> N >> M;
        for (int p = 0; p < N; p++) {
            v.push_back(p + 1);
        }
        for (int q = 0; q < M; q++) {
            cin >> i >> j ;
            reverse(v.begin() + i - 1, v.begin() + j);
        }

        for (int p = 0; p < N; p++) {
            cout << v[p] << " ";
        }
    }