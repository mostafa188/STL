#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item;
          list<int>li;
          list<int> :: iterator it;

          cin >> num ;
          while(num--){
                    cin >> item ;
                    li.push_back(item);
          }

          for(it = li.begin() ;it != li.end(); it++){
                    cout << *it << " ";
          }
          return 0 ;
}