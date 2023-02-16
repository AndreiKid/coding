#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,s=0;
    cin>>a;
    for(int i=0;i<a;i++){
        int n;
        cin>>n;
        if(n<0){
            s+=n;
        }

    }
    cout<<abs(s)<<endl;
    return 0;
}
