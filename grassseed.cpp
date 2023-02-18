#include <bits/stdc++.h>
using namespace std;

int main() {
    double c;
    cin>>c;
    int l;
    cin>>l;
    double a;
    for(int i = 0; i < l; i++){
        double l,w;
        cin>>l>>w;
        a += l * w;
    }
    cout.precision(10);
    cout<<fixed<<a*c<<endl;
    return 0;
}
