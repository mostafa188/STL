#include<bits/stdc++.h>
using namespace std;
int main(){
          int num ,item;
          multiset<int>mst;
          multiset<int> :: iterator it_u,it_l;
          cin >> num ;
          while(num--){
                    cin >> item ;
                    mst.insert(item);
          }

          cout <<"Normal :"<<endl;
          for(auto it : mst) cout<<it<<" ";
          cout<<endl;

         int upper ,lower;
         cin >> upper ;

          it_u= mst.upper_bound(upper);
          cout<<"Upper_bond of "<<upper<<" = "<< *it_u<<endl;

          it_u= mst.lower_bound(upper);
          cout<<"Lower_bond of "<<upper<<" = "<< *it_u<<endl<<endl;

          cin >>lower;
          it_l= mst.upper_bound(lower);
          cout<<"Upper_bond of "<<lower<<" = "<< *it_l<<endl;

          it_l= mst.lower_bound(lower);
          cout<<"Lower_bond of "<<lower<<" = "<< *it_l<<endl;

          return 0;
}