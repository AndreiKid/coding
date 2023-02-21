#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v,v+n);
    reverse(v,v+n);
    long long tot=0;
    for(int i=0;i<n;i++){
        if(i%3!=2){
            tot+=v[i];
        }
    }
    cout<<tot<<endl;
    return 0;
}
 