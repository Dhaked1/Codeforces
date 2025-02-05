#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ll n;
    cin >> n;
    cin >> s;
    ll a = 0;
    ll d = 0;
    ll len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}