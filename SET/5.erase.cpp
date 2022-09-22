#include<bits/stdc++.h>
using namespace std;
int main(){
          int num,item;
          set<int >s;

          cin >> num ;
          for(int i =0 ; i< num ; i++){
                    cin >> item ;
                    s.emplace(item);
          }

          cout <<"Before Items :"<<endl ;
          for(auto it : s) cout<<it<<" ";
          cout<<endl;

          cout<<"Enter erase number thart you want:"<<endl;
          cin >>item;
          s.erase(item);

          cout <<"After Items :"<<endl ;
          for(auto it : s) cout<<it<<" ";
          cout<<endl;

          //using iterator 
          int position ;
          position = 2 ;
          set<int>::iterator it;
          it = s.begin() ;
          advance(it , position);
          s.erase(it);

          cout <<"After Items :"<<endl ;
          for(auto it : s) cout<<it<<" ";
          cout<<endl;

          
          return 0;
}