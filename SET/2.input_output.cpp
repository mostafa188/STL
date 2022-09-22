#include<bits/stdc++.h>
using namespace std ;

int main(){
          int num, item ;
          set <int >s ;

          cin >> num ;

          for(int i=0; i<num;i++){
                    cin >> item ;
                    //s.emplace(item);
                    s.insert(item);
          }

          cout << "using auto iterator : "<<endl ;
          for(auto it : s){
                    cout<<it <<" ";
          }
          cout<<endl;

          cout<<"using iterator :"<<endl;
          set < int > :: iterator it;
          for (it = s.begin(); it != s.end() ; it++){
                    cout<<*it<<" ";
          }
          cout<<endl;
          
          return 0;
}