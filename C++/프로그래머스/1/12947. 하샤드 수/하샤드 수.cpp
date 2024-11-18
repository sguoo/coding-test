#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int y = 0;
    int temp = x;
    while(x != 0) {
        y += x % 10;
        x /= 10;
    }
    
    
    return temp % y == 0;
}