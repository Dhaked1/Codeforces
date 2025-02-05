#include <iostream>
#include <set>
using namespace std;
 
bool isBeautiful(int year) {
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());  
    return digits.size() == 4;  
    
}
 
int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (isBeautiful(y)) {
            cout << y << endl;
            break;
        }
    }
    return 0;
}