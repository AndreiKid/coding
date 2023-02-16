#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int n;
    int cs=0;
    while(cin>>n){
        cs+=1;
        int min=1000000;
        int max=-1000000;
        for(int i=0 ; i<n ; i++){
            int x;
            cin >> x;
            if(x<min){
                min=x;
            }
            if(x>max){
                max=x;
            }
        }
        cout<<"Case "<<cs<<": "<<min<<" "<<max<<" "<<(max-min)<<endl;
    }



    return 0;
}
