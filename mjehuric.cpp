#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int v[5];
  for(int i=0;i<5;i+=1){
    cin>>v[i];
  }
   bool ok = true;
   while (ok == true) {
    ok=false;
    for(int i=1;i<5;i++){
      if (v[i - 1] > v[i]) {
        int crt = v[i];
        v[i] = v[i - 1];
        v[i - 1] = crt;
        for (int i=0;i<5;i++) {
          cout<<v[i]<<" ";
        }
        cout<<" "<<endl;
        ok = true;
      }
    }
  }
  return 0;
}
