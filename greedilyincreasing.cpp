#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin >> n;
int nr[n];

for (int i = 0; i < n; i += 1){
cin >> nr[i];
}

int prev = 0;
vector <int> v;

for (int i = 0; i < n; i += 1){
if (nr[i] > prev){
v.push_back(nr[i]);
prev = nr[i];
}
}
cout << v.size() << endl;
for (auto e : v){
cout << e << " ";
}
return 0;
}