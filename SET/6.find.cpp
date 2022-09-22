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
          set <int >::iterator it;
          it = s.find(item);

          if(it != s.end()) 
                    cout <<"Find"<<endl ;
          else
                    cout<<"Not find"<<endl;
          return 0;
}