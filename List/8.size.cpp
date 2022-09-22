#include<bits/stdc++.h>
using namespace std;
int main(){
          list<int>li;

          li.push_back(3);
          li.push_front(7);
          li.push_back(6);
          li.push_front(1);
          li.push_back(5);
          li.push_front(19);
          
          cout<<"Size of the list : "<<endl;
          cout<<li.size()<<endl;

          return 0 ;
}