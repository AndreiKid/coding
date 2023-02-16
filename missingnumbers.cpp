#include <iostream>
using namespace std;
int main()
{
    long long n, z = 0;
    cin>>n;
    long long a = 1, x;
    while(n-- > 0){
        cin >> x;
        for(long long i=a ; i < x;i++){
            cout<<i<<endl;
            z=1;
        }
        a=x+1;
    }
    if(z==0){
        cout<<"good job"<<endl;
    }

    return 0;
}