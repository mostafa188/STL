#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item ;
          list<int >li;
          list<int>:: iterator it;

          cin >> num ;

          while(num--){
                    cin >> item;
                    li.push_front(item);
          }
          
          for(auto it : li){
                    cout << it <<" ";
          }
          cout<<endl;

          return 0;
}