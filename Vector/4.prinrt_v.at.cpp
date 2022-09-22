#include<bits/stdc++.h>
using namespace std;
int main(){
      int num ,  item ;
      vector< int > v ;
      cin>>num;
      for(int i = 0 ; i < num ; i ++){
            cin >> item ;
            v.push_back(item);
      }
      for (int i = 0; i < num; i++)
      {
            cout<<v.at(i)<<" ";
      }
      
      return 0;
}