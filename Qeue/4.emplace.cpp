#include<bits/stdc++.h>
using namespace std;
int main(){
          int num ,item;
          queue < int > q ;
          cin>>num;
          while(num--){
                    cin >> item ;
                    q.emplace(item);
          }

          while(!q.empty()){
                   cout<< q.front() <<" ";
                   q.pop();
          }
          cout<<endl;
          return 0;
}