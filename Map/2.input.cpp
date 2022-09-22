#include<bits/stdc++.h>
using namespace std;
int main(){
          int num,item,position;
          map <int ,int >mp;

          cin >> num ;
          while(num--){
                    cin >> position ;
                    cin >> item ;
                    mp.insert({position ,item});
          }

          for(auto it : mp) cout << it.first << " "<<it.second <<endl ;
          cout <<endl ;


          map <int ,int > :: iterator it ;

          for (auto it = 1 ;it <=mp.size() ;it++)
                    cout <<mp.at(it) <<" ";
          cout <<endl;
          for (auto it = 1 ;it <=mp.size() ;it++)
                    cout <<mp[it] <<" ";
          cout << endl;

          for(auto it = mp.begin();it != mp.end();it++){
                    cout <<it->first <<" "<<it->second <<endl;
          }
          cout<<mp.max_size();
          return 0;

}