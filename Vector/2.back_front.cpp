#include<bits/stdc++.h>
using namespace std ;

int main(){
      int num , item ;
      vector<int>v ;
      cin>>num;

      while(num--){
            cin>>item;
            v.push_back(item);
      }

      cout<<"Front item is "<<endl<<v.front()<<endl;
      cout<<"Back item is "<<endl<<v.back()<<endl;
      return 0;
}