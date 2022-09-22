#include<bits/stdc++.h>
using namespace std;
int main(){
          int num,item,idx;
          map<int ,int >mp;

          cin >> num ;
          while(num--){
                    cin >> idx >> item ;
                    mp.insert({idx,item});
          }

          cout << "Normal :"<<endl;
          for(auto it : mp) cout<<it.first <<  " " <<it.second <<endl ;
          cout<<endl;

          cin>>idx;
          idx = mp.count(idx);
          cout <<"value is "<<idx<<endl ;
          return 0;
}