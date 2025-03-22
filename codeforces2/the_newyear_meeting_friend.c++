#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;  
    int pos[] = {a, b, c};
    sort(pos, pos + 3);
    int median = pos[1];
    int time = abs(a - median) + abs(b - median) + abs(c - median);
    cout << time << endl; 
    return 0;
}