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
          
          int position,value;
          position = 2 ;
          value = 5;
          deque <int> :: iterator it;
          it = dq.begin()+position ; 

          dq.insert(it,value);

          cout<<endl<<"Afetr insert : "<<endl;
          for(auto it : dq){
                    cout<<it<<" ";
          }cout<<endl;
          return 0 ;
}