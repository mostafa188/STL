#include<bits/stdc++.h>
using namespace std;
int main(){
      int num,item;
      vector<int>v;
      vector<int>::iterator it;

      cin >> num ;

      while(num--){
            cin >> item ;
            v.push_back(item);
      }

      cout<<"Normal vector : "<<endl;
      for(auto it : v){
            cout<<it<<" ";
      }

      cout<<endl;
      sort(v.begin(),v.end());
      cout<<"sort vector:"<<endl;
      
      for(auto it : v){
            cout<<it<<" ";
      }
      cout<<endl;
      reverse(v.begin(),v.end());
      cout<<"Reverse :"<<endl;
      for(auto it : v){
            cout<<it<<" ";
      }
      return 0;
}