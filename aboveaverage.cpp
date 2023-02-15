#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin >> c;
    for(int cc=1; cc<=c; cc++)
    {
        int b;
        cin>>b;
        int a[b];
        for(int j=0; j<b; j++)
        {
            cin>>a[j];
        }
        double s=0.0;
        for(int i=0; i<b; i++)
        {
            s+=a[i];
        }
        double m=s/b;
        int cnt=0;
        for(int i=0; i<b; i++)
        {
            if(a[i]>m)
            {
                cnt+=1;
            }
        }

        cout.precision(3);
        cout<<fixed<<cnt*100.0/b<<"%"<<endl;

    }



return 0;
}
