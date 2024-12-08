#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(int i, int j) {
    return i < j;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    string str = to_string(N);
    sort(str.rbegin(), str.rend(), compare);
    N = stoi(str);

    cout << N;
}
