#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=(a-1);
    }
    cout<<sum+1<<endl;

    return 0;
}
