#include<bits/stdc++.h>
using namespace std ;

int main(){
          int num , item , pop;
          vector<int>v;
          vector<int>::iterator it ;

          cin>>num ;

          while (num--){
                    cin >> item ;
                    v.push_back(item) ;
          }
          
          for(auto it : v){
                    cout<<it << " ";
          }
          cout<<endl ;
          cout << "How many number ,you want to pop back :"<<endl;
          cin >> pop ;
          for(int i=0 ; i<pop;i++){
                    v.pop_back();
          }

          cout<<"After pop_back :"<<endl; 
          for(auto it : v){
                    cout<<it<<" ";
          }
          return 0 ;
}