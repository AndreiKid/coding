#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,x;
    while(cin>>a>>b>>c>>d>>e>>f>>x)
    {
        while(x--)
        {
            int nl=d*a;
            int np=c/e;
            int nm=b/f;
            c=nl;
            b=np;
            a=nm;
        }
        cout<<a<<endl;
    }
    return 0;
}
