#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int x,y;
        cin>>x>>y;
        int c[x],d[y];
        for(int i=0; i<x; i++){
            cin>>c[i];
        }
        for(int k=0; k<y; k++){
            cin>>d[k];
        }
        double sc =0;
        for(int i=0; i<x; i++){
            sc+=c[i];
        }
        double mc=sc/x;
        double sd =0;
        for(int k=0; k<y; k++){
            sd+=d[k];
        }
        double md=sd/y;
        int cnt =0;
        for(int i=0; i<x; i++){
            if(c[i] < mc && c[i] > md){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}