#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=n;
    while(r>9){
        int c=r;
        r=1;
        while(c>0){
            if(c%10!=0)
            {
                r*=(c%10);
            }
            c/=10;
        }
    }
    cout<<r;


    return 0;
}
