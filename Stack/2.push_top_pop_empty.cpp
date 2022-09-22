#include<bits/stdc++.h>
using namespace std ;

int main(){
          int num , item;
          stack <int > st ;

          cin >> num ;

          while(num--){
                    cin >> item ;
                    st.push(item);
          }

          cout <<"STACK items are : "<<endl;
          while(!st.empty()){
                    cout<<st.top()<<" ";
                    st.pop();
          }
          return 0 ;
}