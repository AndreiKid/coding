#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s,t,v[366];
    for(int k=0;k<366;k++){
        v[k]=0;
    }
    for(int i=0;i<n;i++){
        cin>>s>>t;
        for(int j=s;j<=t;j++){
            v[j]=1;
        }
    }
    int c=0;
    for(int k=1;k<366;k++){
        if(v[k]==1){
            c++;
        }
    }
    cout<<c;
    return 0;
}
