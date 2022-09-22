#include<bits/stdc++.h>
using namespace std ;

int main(){
          int num , item , ri;
          list < int > li;

          cin >> num ;
          while (num--){
                    cin >> item ; 
                    li.push_back(item);
          }
          
          cout<<"Normal :"<<endl ;
          for(auto it : li){
                    cout<<it<<" ";
          }cout<<endl;

          cout<<"Enter a removal item :"<<endl;
          cin >> ri;

          li.remove(ri);
          cout << "After remove : "<<endl;
          for(auto it : li ){
                    cout<<it<<" ";
          }
          cout << endl;
          return 0;
}