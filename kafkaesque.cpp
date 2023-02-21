#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, k;
    int total = 1;
    int prevNum = 0;
    long long nums;
    long long num;
    cin >> nums;

    for(i = 0; i < nums; i++)
    {
    	cin >> num;
    	if(prevNum > num)
    	{
    		total += 1;
    	}
    	prevNum = num;

    }
    cout << total << "\n";
    return 0;
}
