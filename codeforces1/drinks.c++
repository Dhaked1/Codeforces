#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += p[i];
    }

    double result = sum / n;
    cout << fixed << setprecision(12) << result << endl;

    return 0;
}

