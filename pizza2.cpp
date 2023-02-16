#include <iostream>

using namespace std;

int main()
{
    float r,c;
    cin >> r >> c;
    cout.precision(10);
    cout << fixed;
    cout << ((r-c)*(r-c)*100)/(r*r )<< endl;



    return 0;
}
