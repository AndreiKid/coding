#include <iostream>

using namespace std;

int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    int c1=w+x+y+z;
    cin>>w>>x>>y>>z;
    int c2=w+x+y+z;
    cin>>w>>x>>y>>z;
    int c3=w+x+y+z;
    cin>>w>>x>>y>>z;
    int c4=w+x+y+z;
    cin>>w>>x>>y>>z;
    int c5=w+x+y+z;
    cin>>w>>x>>y>>z;
    if(c1>c2&&c1>c3&&c1>c4&&c1>c5)
    {
        cout<< "1 " << c1;
    }

    if(c2>c1&&c2>c3&&c2>c4&&c2>c5)
    {
        cout<<"2 "<<c2;
    }

    if(c3>c1&&c3>c2&&c3>c4&&c3>c5)
    {
        cout<<"3 "<<c3;
    }

    if(c4>c1&&c4>c2&&c4>c3&&c4>c5)
    {
        cout<<"4 "<<c4;
    }
    if(c5>c1&&c5>c2&&c5>c3&&c5>c4)
    {
        cout<<"5 "<<c5;
    }
}