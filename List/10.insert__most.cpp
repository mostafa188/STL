/*
list < data_type > list_veriable ;

list < data_type > :: iterator list_vaeriable ;

it = li.begin();

advance(it , position_where) ;

li . insert( it , count , value);

*how many insert a specific value = count
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
          int num ,item ;
          list <int >li;

          cin >> num ;
          while(num--){
                    cin>>item ;
                    li.push_front(item);
          }

          cout<<"Before insert this list :"<<endl;
          for(auto it : li){
                    cout<<it<<" ";
          }
          cout<<endl;
          int position,value,cnt;
          //position where we insert 
          position = 3;
          //value 
          value = 10 ;
          //count this value 
          cnt = 3; 
          //for insert this list a NEW ITEM 
          list<int>::iterator it;
          it = li.begin();
          advance(it,position);

          li.insert(it,cnt, value);

          cout<<"after insert value :"<<endl;

          for(auto it : li){
                    cout<<it<<" ";
          }


          return 0;
}