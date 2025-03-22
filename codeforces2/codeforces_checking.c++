#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {string s = "codeforces";
        string ch;
        cin>>ch;
        if(s.find(ch) != string::npos)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}