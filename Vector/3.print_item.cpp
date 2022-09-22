#include<bits/stdc++.h>
using namespace std ;
int main(){
      int num, item ;
      vector<int>v;
      vector<int>::iterator it;
      cin >> num ;
      while(num--){
            cin >> item ;
            v.push_back(item) ;
      }
      cout<<"Output by v.at() function :"<<endl;

      for(int i=0 ; i<num; i++){
            cout<< v.at(i)<<" ";
      }
      cout<<endl<<"Output by v[ ] :"<<endl;
      for(int i=0;i<num;i++){
            cout<<v[i]<<" ";
      }
      cout<<endl<<"Output by iterator :"<<endl;
      for(auto it : v){
            cout<<it<<" ";
      }
      cout<<endl;
      return 0;
}