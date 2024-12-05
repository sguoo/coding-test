#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;


int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    string A;
    int sum = 0;
    cin >> A;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == 'A' || A[i] == 'B' || A[i] == 'C') {
            sum += 3;
        } else if(A[i] == 'D' || A[i] == 'E' || A[i] == 'F') {
            sum += 4;
        } else if(A[i] == 'G' || A[i] == 'H' || A[i] == 'I') {
            sum += 5;
        } else if(A[i] == 'J' || A[i] == 'K' || A[i] == 'L') {
            sum += 6;
        } else if(A[i] == 'M' || A[i] == 'N' || A[i] == 'O') {
            sum += 7;
        } else if(A[i] == 'P' || A[i] == 'Q' || A[i] == 'R' || A[i] == 'S') {
            sum += 8;
        } else if  (A[i] == 'T' || A[i] == 'U' || A[i] == 'V') {
            sum += 9;
        } else if  (A[i] == 'W' || A[i] == 'X' || A[i] == 'Y' || A[i] == 'Z') {
            sum += 10;
        }
    }
    cout << sum;
}