#include<bits/stdc++.h>
using namespace std ;
int main(){
          int num,item;
          list < int > li ;
          list < int > :: iterator it ;

          cin >> num ;

          while(num--){
                    cin >>item ;
                    li.push_back(item);
          }

          cout<<"Item of this list :"<<endl; 
          for(auto it : li){
                    cout<<it<<" ";
          }
          cout<<endl;

          cout<<"front element of the list :"<<endl;
          cout<<li.front()<<endl ;
          cout<<"Last or Back item of the list "<<endl;
          cout<<li.back()<<endl;
          return 0 ;
}