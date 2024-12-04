#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;


int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int A, B;
    cin >> A >> B;
    string temp;
    temp = to_string(A);
    reverse(temp.begin(), temp.end());
    A = stoi(temp);
    temp = to_string(B);
    reverse(temp.begin(), temp.end());
    B = stoi(temp);
    if (A > B) {
        cout << A << "\n";
    }else {
        cout << B << "\n";
    }
}