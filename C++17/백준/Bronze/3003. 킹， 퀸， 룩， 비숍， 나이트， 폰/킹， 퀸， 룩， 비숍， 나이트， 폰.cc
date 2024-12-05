#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;


int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    vector<int>chess = {1, 1, 2, 2, 2, 8};
    vector<int>chess2;
    int j;
    for (int i = 0; i < chess.size(); i++) {
        cin >> j;
        chess2.push_back(j);
    }
    for (int i = 0; i < chess2.size(); i++) {
        cout << chess[i] - chess2[i]  << " ";
    }
}