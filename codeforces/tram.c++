#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;  
    int max_passengers = 0;  
    int current_passengers = 0;
    for (int i = 0; i < n; ++i) {
        int exit, enter;
        cin >> exit >> enter;  
        current_passengers -= exit; 
        current_passengers += enter;
        max_passengers = max(max_passengers, current_passengers);  
    }
 
    cout << max_passengers << endl;  
    return 0;
}