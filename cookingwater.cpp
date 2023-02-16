#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j ,k;
    long long ltime = 0;
    long long lowest = 0;
    long long htime = 0;
    long long highest = 10000;
    long long cs;

    bool pb=true;
    cin>>cs;
    i = 0;
    while(pb&&i<cs){
        cin>>ltime>>htime;
        if (ltime>lowest){
            lowest = ltime;
        }
        if (htime<highest){
            highest = htime;
        }
        if (lowest>highest){
            pb = false;
        }
        i++;
    }
    if(pb){
        cout<<"gunilla has a point";
    }
    else{
        cout<<"edward is right";
    }
    return 0;
}