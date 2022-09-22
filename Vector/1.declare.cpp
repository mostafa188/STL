#include<bits/stdc++.h>
using namespace std ;

int main(){
      int num,item;
      vector<int>v;
      vector<int>:: iterator it;

      cin>>num;
      while(num--){
            cin>>item;
            v.push_back(item);
      }

      for(auto it : v){
            cout<<it<<" ";
      }
      cout<<endl;
      return 0;
}