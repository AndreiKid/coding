#include <iostream>

using namespace std;

int main()
{
    int b,k,g;
    cin>>b>>k>>g;
    b=b-1;
    int t=k/g;
    if(b%t!=0)
    {
        cout<<(b/t)+1;
    }
    else
    {
        cout<<(b/t);
    }

    return 0;
}
