#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int v[x];
    for(int i=0;i<x;i+=1){
        cin>>v[i];
    }
    for(int i=y-1;i<x;i=i+y){
        cout<<v[i]<<endl; 
    }

    return 0;
}
