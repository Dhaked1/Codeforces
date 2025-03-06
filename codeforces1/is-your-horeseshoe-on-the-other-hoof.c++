#include <iostream>
#include<set>
using namespace std;

int main() {
   set<int>hore;
   for(int i = 0;i<4;i++)
{
    int color;
    cin>>color;
    hore.insert(color);
}
cout<<4-hore.size()<<endl;
    return 0;
}
