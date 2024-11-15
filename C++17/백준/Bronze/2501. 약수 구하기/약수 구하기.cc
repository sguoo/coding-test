#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    vector<int> array;
    cin >> a >> b;
    auto c = sqrt(a);

    for (int i = 1; i <= c; i++) {
        if(a % i == 0) {
            array.push_back(i);
            if (i != a / i) {
                array.push_back(a / i);
            }
        }
    }

    sort(array.begin(), array.end());
    if (b > array.size()) { cout << "0\n"; }
    else {cout << array[b - 1] << "\n";}
}