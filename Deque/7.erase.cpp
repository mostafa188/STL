#include<bits/stdc++.h>
using namespace std;
int main(){
          int num ,item ;
          deque <int > dq;

          cin>>num;
          while (num--){
                    cin>>item;
                    dq.push_front(item);
          }

          int position;
          position = 2;
          deque<int > :: iterator it;
          it = dq.begin()+position;

          dq.erase(it);

          for(auto it : dq){
                    cout << it <<" ";
          }cout<<endl;
          return 0 ;
}