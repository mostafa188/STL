#include<bits/stdc++.h>
using namespace std;
int main(){
          int num ,item ;
          deque <int > dq;

          cin>>num;
          while (num--){
                    cin>>item;
                    dq.push_back(item);
          }

          for(auto it : dq){
                    cout << it <<" ";
          }cout<<endl;
          

          int pops;
          cout<<"How many pop :"<<endl;
          cin>>pops;
          for(int i = 0 ; i <dq.size();i++){
                    dq.pop_back();
                    //dq.pop_front();
          }

          for(auto it : dq){
                    cout<<it<<" ";
          }
          return 0 ;
}