/*
use as set
li.sort();
li.unique();
for(auto it : li) cout<<it<<nl;
*/
#include<bits/stdc++.h>
using namespace std;
#define nl endl
int main(){
          int num, item;
          list<int>li;

          cin>>num;
          while(num--){
                    cin >> item;
                    li.push_back(item);
          }
          cout<<"Normal :"<<nl;

          for(auto it : li){
                    cout<<it<<" ";
          }
          cout<<nl;

          li.unique();
          cout<<"After using function : "<<nl;
          for(auto it : li){
                    cout<<it<<" ";
          }
          cout<<nl;
          return 0 ;
}
