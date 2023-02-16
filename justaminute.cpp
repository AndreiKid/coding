#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    double obs,min,sec,d,e,f;
    f=0;
    cin>>obs;
    for(int i=0;i<obs;i++)
    {
        cin>>min>>sec;
        d+=sec;
        e+=min*60;
    }
    f=d/e;
    if(f<=1)
     {
        cout<<"measurement error";
    }
    else
    {
        cout.precision(9);
        cout<<fixed<<f<<endl;
    }
    return 0;
}
