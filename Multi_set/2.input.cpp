#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item;
          multiset<int>mst;

          cin >> num;

          for(auto i =0;i<num;i++){
                    cin>>item;
                    mst.emplace(item);
                    //mst.insert(item);
          }

          for(auto it : mst) cout <<it<<" ";
          cout<<endl;
          
          return 0;
}