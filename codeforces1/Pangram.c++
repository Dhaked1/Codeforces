#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i = 0;i<s.size();i++)
    {
        s[i] = tolower(s[i]);
    }
    set<char>u(s.begin(),s.end());
    if(u.size() == 26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}