#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long remainder = a % b;
        
        if (remainder == 0) {
            cout << 0 << endl;  
        } else {
            cout << b - remainder << endl;  
        }
    }
    
    return 0;
}
