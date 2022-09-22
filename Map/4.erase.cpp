#include<bits/stdc++.h>
using namespace std ;
int main(){
          int item,num,indx;
          map <int ,int> mp;
          
          cin >> num ;
          while(num--){
                    cin>>indx>>item;
                    mp.insert({indx,item});
          }

          cout<<"normal :"<<endl;
          for(auto it :mp){
                    cout << it.first <<" "<<it.second <<endl;
          }
          cout <<endl ;

          cin >> indx;
          mp.erase(indx);

          for(auto it :mp){
                    cout << it.first <<" "<<it.second <<endl;
          }
          cout <<endl ;

          return 0;
}