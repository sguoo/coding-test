#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<int> alphabet(26, 0);
    string word;
    cin >> word;

    for(char &c : word) {
        c = toupper(c);
    }

    for(char c : word) {
        if('A' <= c && c <= 'Z') {
            alphabet[c - 'A']++;
        }
    }

    int maxCount = *max_element(alphabet.begin(), alphabet.end());
    int countMax = 0;
    int maxIndex = 0;

    for(int i = 0; i < 26; ++i){
        if(alphabet[i] == maxCount){
            countMax++;
            maxIndex = i;
        }
    }

    if(countMax > 1){
        cout << "?\n";
    }
    else{
        char asd = 'A' + maxIndex;
        cout << asd << "\n";
    }
}
