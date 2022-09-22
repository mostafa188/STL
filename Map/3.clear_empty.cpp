#include<bits/stdc++.h>
using namespace std;
int main(){
          int item,index,num;
          map <int ,int >map;

          cin >> num ;
          while(num--){
                    cin>>index>>item;
                    map.insert({index,item});
          }
          
          cout << "Normal :"<<endl;
          for(auto it : map) cout << it.first<<" "<<it.second <<endl;

          //clear map
          map.clear();

          //cheak map 
          if(map.empty())
                    cout<< "MAap is empty !!";
          else
                    cout <<"map is not clear !!";
          
          return 0;
}