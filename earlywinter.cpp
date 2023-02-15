#include <iostream>

using namespace std;

int main()
{
    int a,b,n,dm;
    cin >> n >> dm;
    bool c = false;
    b = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        if(a>dm)
        {
            b++;
        }
        else
        {
            break;
        }
        if(i==n-1)
        {
            c=true;
        }
    }
    if(c==true)
    {
        cout << "It had never snowed this early!";
    }
    else
    {
        cout<<"It hadn't snowed this early in " << b << " years!";
    }
    return 0;
}