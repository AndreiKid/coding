#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main()
{
    double n,k,d,s;
    cin>>n>>k>>d>>s;
    //total dif
    double t=n*d;
    double r=k*s;
    //unsolved problems
    double up=n-k;
    //unsolved problems points
    double unsp=n*d-k*s;
    

    if(unsp/up>100 || unsp/up<0)
    {
        cout<<"impossible";
    }else{
        cout<<fixed<<setprecision(7)<<unsp/up;    
    }



    return 0;
}
