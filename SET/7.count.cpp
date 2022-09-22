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
          cin >> item;
          int c = s.count(item);

          if(c) 
                    cout <<"1"<<endl ;
          else
                    cout<<"0"<<endl;
          return 0;
}