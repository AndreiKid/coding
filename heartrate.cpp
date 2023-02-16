#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,c,m,n;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin>>b>>c;
        m=60*(b/c);
        n=60/c;
        cout<<fixed<<setprecision(4)<<m-n<<" "<<m<<" "<<m+n<<endl;
    }
    return 0;
}
