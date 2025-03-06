#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    set<char>letters;
    for(char ch : s)
    {
        if(isalpha(ch))
        {
            letters.insert(ch);
        }
    }
    cout<<letters.size()<<endl;
    return 0;
}