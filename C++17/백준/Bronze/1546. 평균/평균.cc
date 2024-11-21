#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    float sum = 0, M, count;
    cin >> count;
    vector<float> v(count);
    for (int i = 0; i < count; i++) {
        cin >> v[i];
    }
    M = *max_element(v.begin(), v.end());
    for (int i = 0; i < count; i++) {
        sum += v[i]/M*100;
    }
    cout << sum/count << "\n";

}