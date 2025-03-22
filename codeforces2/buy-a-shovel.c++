#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,r;
    cin>>k>>r;
    for(int n = 1;n<=10;n++)
    {
        if((n*k)%10 == r || (n*k)%10 == 0)
        {
            cout<<n<<endl;
            return 0;
        }
    }
    
    return 0;
}