#include <iostream>

using namespace std;

int main()
{

    int x,y,z;
    cin>>x>>y>>z;
    for(int i=1;i<=z;i+=1){

             if(i%x==0 && i%y==0){
                cout<<"FizzBuzz"<<endl;
            }
             else if(i%x==0){
                cout<<"Fizz"<<endl;
            }
            else if(i%y==0){
                cout<<"Buzz"<<endl;
            }

            else if(i%x!=0 && i%y!=0){
                cout<<i<<endl;
            }

    }
    return 0;
}
