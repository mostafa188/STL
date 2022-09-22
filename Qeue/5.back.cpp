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
          cout <<"Back item : "<<endl;
          cout<<q.back()<<endl;

          cout <<"front item : "<<endl;
          cout<<q.front()<<endl;

          return 0;
}