#include<bits/stdc++.h>
using namespace std;

int main(){
          int num , item ; 
          list <int> li ;
          cin >> num ;

          while(num--){
                    cin >> item ;
                    li.push_back(item);
          }
           
          cout<<"Normal : "<<endl;
          for(auto it : li){
                    cout<<it<<" ";
          }cout<<endl;

          li.sort();
          cout<<"After sort : "<<endl;
          for(auto it : li){
                    cout<<it<<" ";
          }cout<<endl;

          return 0 ;
}