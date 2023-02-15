#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long s=0;//suma
    int i=0;//nivel
    bool ok=true;
    while(ok)
    {
        i=i+1;
        long long k=(2*i-1)*(2*i-1);

        if(s+k<=n)
        {
            s=s+k;
        }
        else
        {
            ok=false;
            i=i-1;
        }
    }
    cout<<i;


    return 0;
}
