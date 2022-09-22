#include<bits/stdc++.h>
using namespace std;
int main(){
          int num,item,index;
          multimap<int ,int>mp;

          cin >> num;
          while(num--){
                    cin >> index >> item ;
                    mp.insert({index , item});
          }

          cout<<"Normal :"<<endl;
          for(auto it : mp) 
                    cout<<it.first <<" "<<it.second<<endl;

          cout<<"Again :"<<endl;
          for(auto it = mp.begin() ;it != mp.end();it++){
                    cout<< (*it).first<<" "<<(*it).second<<endl;
          }
          cout <<endl;
          return 0 ;
}