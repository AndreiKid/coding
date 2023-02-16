#include <iostream>

using namespace std;

int main()
{

    int d,t;
    cin>>d;
    int colddays=0;
    for(int i=0; i<d;i++){
            cin>>t;
            if(t<0){
                colddays+=1;
            }

    }
    cout<<colddays;
    return 0;
}
