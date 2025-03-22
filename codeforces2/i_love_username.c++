#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int first_score;
    cin >> first_score;
    
    int max_score = first_score;
    int min_score = first_score;
    int amazing_performances = 0;
    
    for(int i = 1; i < n; i++) {
        int score;
        cin >> score;
        
        if(score > max_score) {
            max_score = score;
            amazing_performances++;
        }
        else if(score < min_score) {
            min_score = score;
            amazing_performances++;
        }
    }
    
    
    cout << amazing_performances << endl;
    return 0;
}
