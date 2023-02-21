#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,alice=0,bob=0;
    cin >> a;
    int b[a];
    for(int i = 0 ; i < a ;i++){
        cin >> b[i];
    }
    sort(b, b+a);
    reverse(b,b+a);
    for(int i = 0 ; i < a ;i++){
        if(i%2==0){
            alice+=b[i];
        }
        if(i%2==1){
            bob+=b[i];
        }
    }
    cout << alice << " " << bob;
    return 0;
}
 