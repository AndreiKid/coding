#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l=1;
    int r=1000;
    while(l<=r)
    {
        int m=(l+r)/2;
        cout<<m<<endl;
        string s;
        cin>>s;
        if(s=="correct"){
            return 0;
        }
        else if(s=="lower"){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return 0;
}
