/*
multilple erase 
list < int > it ;

list < int > :: iterator it1,it2 ;

it1 = li . begin(); 
it2 = li . begin();

advance(it2,position);
advane(it1 , position);
li . erase(it1 , it2);
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
          int num , item ,position,tem;
          list < int > li ;

          cin >> num ;
          tem = num ;
          while(num--){
                    cin>>item ;
                    li.push_back(item);
          }

          cout<<"Items are : "<<endl;
          for(auto it : li){
                    cout<<it<<" ";
          }cout<<endl;
          cout<<"Enter position where erase in 0-"<<tem-1<< " :" <<endl;
          cin >> position ;
          //erase from this function a value 
          list < int > ::iterator it ;
          it = li.begin();
          advance(it , position);

          li.erase(it);

          cout<<"After erase a vlue :"<<endl;
          for(auto it : li){
                    cout <<it << " ";
          }
          return 0 ;
}