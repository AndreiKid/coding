#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        for(e=1; e<=b; e++)
        {
            cin>>c;
            if(e==1)
            {
                d=c-1;
            }
            if(c!=d+1&&(e!=1||e!=b))
            {
                cout<<e<< endl;
                c=d;
            }
            d=c;
        }
        d=0;
        c=0;
    }

    return 0;
}
