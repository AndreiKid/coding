#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int tr=0;
    int pr=0;
    int v=0;
    cin>>tr>>pr;
    int vc;
    for(int i=1;i<n;i++){
        int t,p;
        cin>>t>>p;

        vc=(p-pr)/(t-tr);
        if(vc>v){
            v=vc;
        }
        tr=t;
        pr=p;
    }
        cout<<v;
    return 0;
}