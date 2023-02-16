#include <iostream>

using namespace std;

int main()
{

    long long year;
    cin>>year;
    if(((year - 2017) * 12-4) % 26 < 12){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
