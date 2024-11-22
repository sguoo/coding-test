#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    getline(cin, str);
    stringstream ss(str);

    vector<string> v;

    string word;
    while (getline(ss, word, ' ')) {
        if (!word.empty()) { 
            v.push_back(word);
        }
    }
    cout << v.size() << "\n";

}