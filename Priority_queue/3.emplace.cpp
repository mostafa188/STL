#include<bits/stdc++.h>
using namespace std ;
int main(){
          int num,item;
          priority_queue<int >pq;

          cin >> num ;
          while(num--){
                    cin >> item ;
                    pq.emplace(item);
          }

          while(!pq.empty()){
                    cout<<pq.top()<<" ";
                    pq.pop();
          }cout<<endl;

          if(pq.empty())
                    cout << "Empty !!";
          else
                    cout <<"Not Empty !!";
          return 0;
}