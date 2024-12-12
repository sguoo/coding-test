#include <bits/stdc++.h>
using namespace std;

int constructor(int self_number) {
    int sum = 0;
    do sum += self_number % 10; while ((self_number /= 10) > 0);
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int i = 0;
    vector<int> n;
    while (i <= 10000) {
        n.push_back(i + constructor(i));
        if(find(n.begin(), n.end(), i) == n.end()) cout << i << "\n";
        i++;
    }
    cout.flush();
}
