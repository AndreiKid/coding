#include <iostream>

using namespace std;

int main()
{
  int m,n;
  cin>>m>>n;
  int i=0;
  if(m<n)
  {
      swap(m,n);
  }
  while(n<=21 && n<=m+1)
  {
       if(n>=m+1)
       {
           break;
       }
       cout<<n+1<<endl;
       n+=1;
  }

    return 0;
}
