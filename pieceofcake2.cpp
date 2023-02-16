#include <iostream>

using namespace std;

int main()
{
    int l,h,v;
    cin>>l>>h>>v;
    int s1=(h*v);
    int s2=(l-v)*h;
    int s3=(l-h)*v;
    int s4=(l-v)*(l-h);
    if(s1>=s2&&s1>=s3&&s1>=s4)
    {
        cout<<s1*4;
    }

    else
    {
        if(s2>=s1&&s2>=s3&&s2>=s4)
        {
            cout<<s2*4;
        }
        else
        {
            if(s3>=s1&&s3>=s2&&s3>=s4)
            {
                cout<<s3*4;
            }
            else
            {

                cout<<s4*4;
            }
        }

    }

    return 0;
}

