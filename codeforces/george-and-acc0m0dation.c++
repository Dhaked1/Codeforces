#include <iostream>
using namespace std;
 
int main() {
    int n;
    int count = 0;
    
   
    cin >> n;
    
    while (n--) {
        int  p, q;
        cin >> p >> q;
        
        
        if ( q -p>= 2) {
            count++;  
        }
    }
    
   
    cout << count << endl;
    return 0;
}