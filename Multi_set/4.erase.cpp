#include<bits/stdc++.h>
using namespace std;
int main(){
          int num,item,position;
          multiset <int> mst;
          multiset<int>::iterator it;

          cin >> num;
          while(num--){
                    cin >> item;
                    mst.insert(item);
          }

          cout << "Normal :"<<endl;
          for(auto it : mst) cout << it <<" ";
          cout<<endl;
          cin >> item;
          /*
          erase number :
                position = 3 ;
                it = mst.begin();
                advance(it,position);
                mst.erase(it,position);
          */
          mst.erase(item);

          cout << "After erase :"<<endl;
          for(auto it : mst) cout << it <<" ";
          cout<<endl;
          return 0;
}