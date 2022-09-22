#include<bits/stdc++.h>
using namespace std;
int main(){
          list<int>li;
          list<int>:: iterator it;
          //manual iterator 
          for(it = li.begin() ;it != li.end(); it++){
                    cout << *it << " ";
          }
          //auto iterator
          for(auto it : li){
                    cout<<it<<" ";
          }
          return 0;
}

