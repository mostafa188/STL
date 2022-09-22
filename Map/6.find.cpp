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
          it= mp.find(idx);
          if(it != mp.end()) cout<< "Find this value !!"<<endl;
          else cout<<"Not find !!"<<endl;
          return 0;
}