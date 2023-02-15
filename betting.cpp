#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    cin >> a;
    b=100/a;
    c=100/(100-a);
    cout << fixed << setprecision(3) << b << endl;
    cout << fixed << setprecision(3) << c << endl;
    return 0;
}