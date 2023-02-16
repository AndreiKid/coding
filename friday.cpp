#include <iostream>
using namespace std;
int main()
{
    int t,m,d,dm,fri,v;
    cin >> t;
    for(int i=0;i<t; i++){
        cin>>d>>m;
        fri=0;
        v=0;
        for(int j=0;j<m;j++){
            cin>>dm;
            if(dm>12&&(v+13)%7==6){
                fri++;
            }
            v+=dm;
        }
        cout<<fri<<endl;
    }
    return 0;
}