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
          map<int ,int>::iterator it;
          cin>>idx;

          //upper bond test
          it = mp.upper_bound(idx);
          if(it != mp.end())
                    cout<<(*it).first<<" "<<(*it).second<<endl;
          else
                    cout<<"Not exiisted any upper value !!"<<endl;

          //lower bond test 
          it = mp.lower_bound(idx);
          if(it != mp.end())
                    cout<<(*it).first<<" "<<(*it).second<<endl;
          else
                    cout<<"Not exiisted any lower value !!"<<endl;

          return 0;
}