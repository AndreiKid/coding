#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int s,c,k;
    cin>>s>>c>>k;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    sort(a,a+s);
    int tot=1;
    int first=0;
    int last=0;
    for(int i=1;i<s;i++){
        if(i-first+1<=c&&a[i]-a[first]<= k){
            last=i;
        }else{
        first=i;
        last=i;
        tot+=1;
        }
    }
    cout<<tot<<endl;
    return 0;
}
 