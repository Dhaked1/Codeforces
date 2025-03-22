#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int av = 0;  
    int newrecu = 0;  
 
    while (n--) {
        int event;
        cin >> event;
 
        if (event > 0) {  
            av += event;  
        } else {  
            if (av > 0) {
                av--;  
            } else {
                newrecu++;  
            }
        }
    }
 
    cout << newrecu << endl;  
    return 0;
}
