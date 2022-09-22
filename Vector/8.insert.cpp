#include<bits/stdc++.h>
using namespace std;
int main(){
      int item , num;
      vector<int>v;
      vector<int>::iterator it;

      cin>>num;
      while(num--){
            cin >> item ;
            v.push_back(item);
      }

      v.insert(v.begin(),12);
      v.insert(v.begin()+1,10);

      cout<<endl<<"vecror items :"<<endl ;
      for(auto it : v){
            cout<<it<<" ";
      }

      return 0 ;
}