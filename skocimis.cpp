#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    int jump = max(y-x, z-y);
    jump--;

    cout<<jump<<endl;
}