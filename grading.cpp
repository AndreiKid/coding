#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int g;
    cin>>g;
    if(g>=a && g>b && g>c && g>d && g>e)
    {
        cout<<"A";
    }
    if(g<a && g>=b && g>c && g>d && g>e)
    {
        cout<<"B";
    }
    if(g<a && g<b && g>=c && g>d && g>e)
    {
        cout<<"C";
    }
    if(g<a && g<b && g<c && g>=d && g>e)
    {
        cout<<"D";
    }
    if(g<a && g<b && g<c && g<d && g>=e)
    {
        cout<<"E";
    }
    if(g<a && g<b && g<c && g<d && g<e)
    {
        cout<<"F";
    }
    return 0;
}
