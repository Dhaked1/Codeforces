#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
vector<int>cards(n);
for(int i =0;i<n;i++)
{
    cin>>cards[i];
}
int l =0, r = n-1;
int s= 0,d=0;
bool turn = true;

while(l<=r)
{
    if(cards[l]>cards[r])
    {
        if(turn)
        {
            s += cards[l];
        }
        else
        {
            d += cards[l];
        }
        l++;
    }
    else
    {
        if(turn)
        {
            s += cards[r];
        }
        else
        {
            d += cards[r];
        }
        r--;
    }
    turn = !turn;
}
cout<<s<<" "<<d<<endl;
    return 0;
}