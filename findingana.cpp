#include <iostream>

using namespace std;

int main()
{
    string b,c;
    cin >> b;
    size_t a = b.find('a');
    c = b.substr(a);
    cout << c;
    return 0;
}