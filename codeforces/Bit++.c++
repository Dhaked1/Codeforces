#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int n, x = 0;
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        string op;
        cin >> op;
 
        if(op == "++X" || op == "X++") 
        {
            x++;
        }
        else if(op == "--X" || op == "X--") 
        {
            x--;
        }
    }
    
    cout << x << endl;
    return 0;
}