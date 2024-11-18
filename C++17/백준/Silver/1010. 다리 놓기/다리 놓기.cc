#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned long long combi(int n, int r) {
    if (r > n - r) {
        r = n - r;
    }

    unsigned long long result = 1;

    for (int i = 1; i <= r; i++) {
        result *= (n - i + 1);
        result /= i;
    }

    return result;
}

int main() {
    int n, r, temp, p;
    vector<unsigned long long> result;
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> n >> r;
        if (n < r) {
            temp = n;
            n = r;
            r = temp;
        }
        result.push_back(combi(n,r));
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}