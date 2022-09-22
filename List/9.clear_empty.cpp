#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item ;
          list < int > li ;

          cin >> num ;

          while(num--){
                    cin >> item ;
                    li.push_back(item);
          }

          li.clear();

          if(li.empty()){
                    cout<<"Empty !!"<<endl;
          }else{
                    cout<<"Not empty !!"<<endl;
          }
          return 0 ;
}