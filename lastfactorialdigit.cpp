#include <iostream>

using namespace std;

int main()
{

    int a;
    long long b;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        if(b==1){
            cout<<1<<endl;
        }
        if(b==2){
            cout<<2<<endl;
        }
        if(b==3){
            cout<<6<<endl;
        }
        if(b==4){
            cout<<4<<endl;
        }
        if(b>4){
            cout<<0<<endl;
        }

    }

    return 0;
}
