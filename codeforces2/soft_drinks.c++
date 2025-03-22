#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int drink_toasts = total_drink / nl;

    int total_slices = c * d;
    int salt_toasts = p / np;

    int max_toasts = min(drink_toasts, min(total_slices, salt_toasts));

    
    cout << max_toasts / n << endl;
    
    return 0;
}
