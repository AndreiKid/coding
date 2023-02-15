#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    int b;
    while(cin>>a>>b){
        if(a==0&&b==0)
        {
            break;
        }
        int v1[a];
        int v2[b];
        for(int i=0; i<a; i++)
        {
            cin>>v1[i];
        }
        for(int i=0; i<b; i++)
        {
            cin>>v2[i];
        }
        int c=0;
        sort(v2,v2+b);
        for(int i=0; i<a; i++)
        {
            int l=0;
            int r=b-1;
            while(l<=r){
                int m=(l+r)/2;
                if(v2[m]== v1[i]){
                    c+=1;
                    break;
                }
                else if(v2[m]<v1[i]){
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
        }

        cout<<c<<endl;
    }
    return 0;
}
