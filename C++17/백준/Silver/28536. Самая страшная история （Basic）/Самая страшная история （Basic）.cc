#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    vector<long long> prefix(n+1, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) prefix[i+1] = prefix[i] + v[i].size();
    for(int i=0;i<m;i++){
        long long x;
        cin>>x;
        int idx = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin() -1;
        cout<<idx+1<<" "<<x - prefix[idx]<<"\n";
    }
}
