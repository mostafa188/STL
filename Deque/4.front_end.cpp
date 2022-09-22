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

          for(auto it : dq){
                    cout << it <<" ";
          }cout<<endl;
          
          cout<<"front item : "<<endl;
          cout<<dq.front()<<endl;

          cout<<"Back item : "<<endl;
          cout<<dq.back()<<endl;
          return 0 ;
}