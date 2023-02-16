#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
    int b[n];
    bool t[n];

    for(int i=0;i<n;i++){
        cin>>b[i];
        t[i]=false;
    }
    for(int i=1;i<n;i++){
        int c=abs(b[i]-b[i-1]);
        if(c<n){
            t[c]=true;
        }
    }
    bool ok=true;
    for(int i=1;i<n;i++){
        if(t[i]==false){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"Jolly"<<endl;
    }
    else{
        cout<<"Not jolly"<<endl;
    }
    }
    return 0;
}
