#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int tmp;
    tmp=v[0];
    v[0]=v[k];
    v[k]=tmp;
    sort(v+1,v+n);
    int c=0;
    int p=0;
    int t=0;
    for(int i=0; i<n; i++)
    {
        if(t+v[i]<=300)
        {
            c++;
            t+=v[i];
            p+=t;
        }
        else
        {
            break;
        }

    }
    cout<<c<<" "<<p<<endl;
    return 0;
}
