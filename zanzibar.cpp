#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int current;
        cin>>current;
        int s=0;
        while(current !=0 )
        {
            int x;
            cin>>x;
            if(x>2*current)
            {
                s+=x-2*current;
            }
            current =x;
        }
        cout<<s<<endl;
    }


    return 0;
}