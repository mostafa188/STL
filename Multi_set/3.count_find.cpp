#include<bits/stdc++.h>
using namespace std;
int main(){
          int num ,item;
          multiset<int>mst;
          multiset<int> :: iterator it;
          cin >> num ;
          while(num--){
                    cin >> item ;
                    mst.insert(item);
          }

          cout <<"Normal :"<<endl;
          for(auto it : mst) cout<<it<<" ";
          cout<<endl;

          cin>>item;
          cout<<"Number of "<<item <<" is " <<endl;
          cout <<mst.count(item)<<endl;
          it = mst.find(item);
          if(it != mst.end()){
                    cout <<item<<" is existd in this set !!";
          }
          else{
                    cout<<"Not existed !!";
          }

          return 0;
}