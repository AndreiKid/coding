#include <iostream>

using namespace std;

int main()
{
    int v[1001];
    //v[i] =0;
    for(int i=1; i<=1000; i++){
        v[i] =0;
    }

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v[x]=1;
    }
    int s =-1;
    int e =-1;
    for(int i=1; i<=1000; i++){
        if(v[i]==1){
            if(s==-1){
                s =i;
                e =i;
            }
            else{
                e=i;
            }
        }
        else{
            if(s !=-1){
                if(s==e){
                    cout<<s<<" ";
                }else if(e-s==1){
                    cout<<s<<" "<<e<<" ";
                }
                else{
                    cout<<s<<"-"<<e<<" ";
                }
                s=-1;
                e=-1;
            }
        }
    }
    if(s !=-1){
        if(s==e){
            cout<<s<<" ";
        }
        else{
            cout<<s<<"-"<<e<<" ";
        }
    }

    return 0;
}
