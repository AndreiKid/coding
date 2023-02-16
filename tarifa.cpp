#include <iostream>

using namespace std;

int main()
{

    int mb=0;
    int months;
    cin>>mb>>months;
    int used=0;
    for(int i=0;i<months;i++)
    {
        int t;
        cin>>t;
        used+=t;
    }
    cout<<mb*(months+1)-used<<endl;

    return 0;
}
