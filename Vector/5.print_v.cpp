#include<bits/stdc++.h>
using namespace std ;

int main(){
      int num,item ; 
      vector<int>v;

      cin >> num ;

      while(num--){
            cin >> item ; 
            v.push_back(item);
      }
      //it didn't show any input
      for(int i= 0 ;i<num;i++){
            cout<<v[i]<<" ";
      }
      return 0 ; 
}