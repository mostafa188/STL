#include<bits/stdc++.h>
using namespace std ;

int main(){
          int num , item ;
          vector<int>v;
          vector<int>::iterator it;

          cin>>num;
          while(num--){
                    cin >> item ;
                    v.push_back(item);
          }

          cout<<"Before insert :"<<endl;
          for(auto it : v){
                    cout<<it<<" ";
          }
          cout << endl; 

          v.insert(v.begin()+3,3,1);
          cout<<"After insert : "<<endl;
          for(auto it : v){
                    cout<<it<<" ";
          }

          return 0 ;
}